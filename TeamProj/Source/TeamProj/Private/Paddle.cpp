#include "Paddle.h"
#include "Boat.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "EngineUtils.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"

APaddle::APaddle()
{
    PrimaryActorTick.bCanEverTick = true;

    PrimaryHand = nullptr;
    SecondaryHand = nullptr;
    bIsTwoHandGrabbing = false;
    bIsTouchingWater = false;
    CurrentBoat = nullptr;
}

void APaddle::BeginPlay()
{
    Super::BeginPlay();

    // 블루프린트에 배치된 Grab 포인트를 이름으로 찾음
    GrabPointPrimary = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("BPPrimaryGrabPoint")));
    GrabPointSecondary = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("BPSecondaryGrabPoint")));

    if (!GrabPointPrimary || !GrabPointSecondary)
    {
        UE_LOG(LogTemp, Warning, TEXT("GrabPoints not found! Check BP_Paddle component names."));
    }

    // 보트 찾기
    for (TActorIterator<ABoat> It(GetWorld()); It; ++It)
    {
        CurrentBoat = *It;
        break;
    }
}

void APaddle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector MoveDelta = FVector::ZeroVector;

    // 기존 양손 잡기 기능
    if (bIsTwoHandGrabbing && PrimaryHand && SecondaryHand && GrabPointPrimary && GrabPointSecondary)
    {
        FVector Hand1 = PrimaryHand->GetComponentLocation();
        FVector Hand2 = SecondaryHand->GetComponentLocation();
        FVector Grab1 = GrabPointPrimary->GetComponentLocation();
        FVector Grab2 = GrabPointSecondary->GetComponentLocation();

        FVector MidHand = (Hand1 + Hand2) * 0.5f;
        FVector MidGrab = (Grab1 + Grab2) * 0.5f;
        MoveDelta = MidHand - MidGrab;

        AddActorWorldOffset(MoveDelta);

        FVector DirHand = (Hand2 - Hand1).GetSafeNormal();
        FVector DirGrab = (Grab2 - Grab1).GetSafeNormal();
        FQuat DeltaRot = FQuat::FindBetweenNormals(DirGrab, DirHand);
        AddActorWorldRotation(DeltaRot);
    }
    else if (PrimaryHand && GrabPointPrimary)
    {
        MoveDelta = PrimaryHand->GetComponentLocation() - GrabPointPrimary->GetComponentLocation();
        AddActorWorldOffset(MoveDelta);
    }

    // 노가 물에 닿아있고, 보트가 연결되어 있을 때 힘 전달
    if (bIsTouchingWater && CurrentBoat && !MoveDelta.IsNearlyZero())
    {
        // 노가 이동한 방향의 반대 방향으로 힘을 가함 (즉, 노를 뒤로 밀면 배는 앞으로)
        FVector PushDir = -MoveDelta.GetSafeNormal();

        // 얼마나 움직였는지를 DotProduct로 계산
        float MovementAmount = FVector::DotProduct(MoveDelta, -PushDir); // 뒤로 밀었을 때만 양수
        MovementAmount = FMath::Clamp(MovementAmount, 0.0f, 100.0f);     // 당긴 경우 무시

        if (MovementAmount > KINDA_SMALL_NUMBER)
        {
            FVector PushForce = PushDir * MovementAmount * 20.0f; // 힘 계수 조절
            PushForce.Z = 0; // 위로 뜨는 것 방지

            CurrentBoat->ApplyPaddleImpulse(PushForce);

            FVector BoatForward = CurrentBoat->GetActorForwardVector();
            FVector BoatRight = CurrentBoat->GetActorRightVector();

            float RotationAmount = FVector::DotProduct(PushDir, BoatRight);

            // 방향 판별을 위한 CrossProduct의 Z값 사용
            FVector Cross = FVector::CrossProduct(BoatForward, PushDir);
            float Sign = FMath::Sign(Cross.Z);  // +1: 왼쪽, -1: 오른쪽 (좌표계에 따라 반대일 수 있음)

            float YawDelta = Sign * FMath::Abs(RotationAmount) * 1.5f; // 회전 민감도
            FRotator NewRot = CurrentBoat->GetActorRotation();
            NewRot.Yaw += YawDelta;

            CurrentBoat->SetActorRotation(NewRot);

            if (GEngine)
            {
                GEngine->AddOnScreenDebugMessage(-1, 0.05f, FColor::Green,
                    FString::Printf(TEXT("PushForce: %s"), *PushForce.ToString()));
            }

            UE_LOG(LogTemp, Warning, TEXT("Apply Force: %s"), *PushForce.ToString());
        }
    }
    if (bIsTouchingWater && CurrentBoat && !MoveDelta.IsNearlyZero())
    {
        FVector PushDir = MoveDelta.GetSafeNormal();
        float PushAmount = FVector::DotProduct(MoveDelta, PushDir);
        FVector Impulse = PushDir * PushAmount * 3.5f; // 100~300 사이로 조절
        Impulse.Z = 0; // 위로 뜨는 거 방지

        CurrentBoat->ApplyPaddleImpulse(Impulse); // <- 이 부분만 변경됨
    }
    if (CurrentBoat)
    {
        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        if (PlayerPawn)
        {
            FVector BoatLoc = CurrentBoat->GetActorLocation();
            FRotator BoatRot = CurrentBoat->GetActorRotation();

            // 플레이어 위치를 보트 위로 이동
            FVector PawnLoc = PlayerPawn->GetActorLocation();
            FVector NewLoc = FVector(BoatLoc.X, BoatLoc.Y, PawnLoc.Z); // Z는 유지

            PlayerPawn->SetActorLocation(NewLoc);
            PlayerPawn->SetActorRotation(FRotator(PawnLoc.Rotation().Pitch, BoatRot.Yaw, PawnLoc.Rotation().Roll));
        }
    }
}


void APaddle::GrabObject(USceneComponent* Controller)
{
    if (!PrimaryHand)
    {
        PrimaryHand = Controller;
    }
    else if (!SecondaryHand && Controller != PrimaryHand)
    {
        SecondaryHand = Controller;
        bIsTwoHandGrabbing = true;
    }

    UE_LOG(LogTemp, Warning, TEXT("GrabObject called"));
}

void APaddle::ReleaseObject(USceneComponent* Controller)
{
    if (Controller == SecondaryHand)
    {
        SecondaryHand = nullptr;
        bIsTwoHandGrabbing = false;
    }
    else if (Controller == PrimaryHand)
    {
        if (SecondaryHand)
        {
            PrimaryHand = SecondaryHand;
            SecondaryHand = nullptr;
            bIsTwoHandGrabbing = false;
        }
        else
        {
            PrimaryHand = nullptr;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("ReleaseObject called"));
}

void APaddle::NotifyActorBeginOverlap(AActor* OtherActor)
{
    if (OtherActor && OtherActor->GetName().Contains(TEXT("Water")))
    {
        bIsTouchingWater = true;
        UE_LOG(LogTemp, Warning, TEXT("Touching Water Begin"));
    }
}

void APaddle::NotifyActorEndOverlap(AActor* OtherActor)
{
    if (OtherActor && OtherActor->GetName().Contains(TEXT("Water")))
    {
        bIsTouchingWater = false;
        UE_LOG(LogTemp, Warning, TEXT("Touching Water End"));
    }
}