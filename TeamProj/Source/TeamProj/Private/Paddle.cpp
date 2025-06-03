#include "Paddle.h"
#include "Boat.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"

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

    GrabPointPrimary = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("BPPrimaryGrabPoint")));
    GrabPointSecondary = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("BPSecondaryGrabPoint")));

    if (!GrabPointPrimary || !GrabPointSecondary)
    {
        UE_LOG(LogTemp, Warning, TEXT("GrabPoints not found! Check BP_Paddle component names."));
    }

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

    if (bIsTouchingWater && CurrentBoat && !MoveDelta.IsNearlyZero())
    {
        FVector PushDir = -MoveDelta.GetSafeNormal();
        float MovementAmount = FVector::DotProduct(MoveDelta, -PushDir);
        MovementAmount = FMath::Clamp(MovementAmount, 0.0f, 100.0f);

        if (MovementAmount > KINDA_SMALL_NUMBER)
        {
            FVector PushForce = PushDir * MovementAmount * 20.0f;
            PushForce.Z = 0;

            CurrentBoat->ApplyPaddleImpulse(PushForce);

            FVector BoatForward = CurrentBoat->GetActorForwardVector();
            FVector BoatRight = CurrentBoat->GetActorRightVector();
            float RotationAmount = FVector::DotProduct(PushDir, BoatRight);
            FVector Cross = FVector::CrossProduct(BoatForward, PushDir);
            float Sign = FMath::Sign(Cross.Z);
            float YawDelta = Sign * FMath::Abs(RotationAmount) * 1.5f;

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
