#include "Paddle.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"

APaddle::APaddle()
{
    PrimaryActorTick.bCanEverTick = true;
}

void APaddle::BeginPlay()
{
    Super::BeginPlay();

    // 이름으로 SceneComponent를 찾아 설정
    GrabPointPrimary = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("BPPrimaryGrabPoint")));
    if (!GrabPointPrimary)
        GrabPointPrimary = FindComponentByClass<USceneComponent>(); // fallback

    GrabPointSecondary = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("BPSecondaryGrabPoint")));
    if (!GrabPointSecondary)
        GrabPointSecondary = FindComponentByClass<USceneComponent>(); // fallback
}

void APaddle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!GrabPointPrimary) return;

    if (bIsTwoHandGrabbing && PrimaryHand && SecondaryHand && GrabPointSecondary)
    {
        FVector HandPos1 = PrimaryHand->GetComponentLocation();
        FVector HandPos2 = SecondaryHand->GetComponentLocation();

        FVector GrabPos1 = GrabPointPrimary->GetComponentLocation();
        FVector GrabPos2 = GrabPointSecondary->GetComponentLocation();

        FVector MidHand = (HandPos1 + HandPos2) * 0.5f;
        FVector MidGrab = (GrabPos1 + GrabPos2) * 0.5f;
        FVector MoveDelta = MidHand - MidGrab;
        AddActorWorldOffset(MoveDelta);

        FVector DirHand = (HandPos2 - HandPos1).GetSafeNormal();
        FVector DirGrab = (GrabPos2 - GrabPos1).GetSafeNormal();
        FQuat DeltaRot = FQuat::FindBetweenNormals(DirGrab, DirHand);
        AddActorWorldRotation(DeltaRot);
    }
    else if (PrimaryHand)
    {
        FVector HandLoc = PrimaryHand->GetComponentLocation();
        FVector GrabLoc = GrabPointPrimary->GetComponentLocation();
        FVector MoveDelta = HandLoc - GrabLoc;
        AddActorWorldOffset(MoveDelta);
    }
}

void APaddle::GrabObject(USceneComponent* Controller)
{
    if (!GrabPointPrimary || !GrabPointSecondary) return;

    if (!PrimaryHand)
    {
        PrimaryHand = Controller;

        FTransform HandTransform = Controller->GetComponentTransform();
        FTransform GrabTransform = GrabPointPrimary->GetComponentTransform();
        FTransform Delta = UKismetMathLibrary::MakeRelativeTransform(GrabTransform, HandTransform);
        AddActorWorldTransform(Delta);
    }
    else if (!SecondaryHand && Controller != PrimaryHand)
    {
        SecondaryHand = Controller;

        FTransform HandTransform = Controller->GetComponentTransform();
        FTransform GrabTransform = GrabPointSecondary->GetComponentTransform();
        FTransform Delta = UKismetMathLibrary::MakeRelativeTransform(GrabTransform, HandTransform);
        AddActorWorldTransform(Delta);

        bIsTwoHandGrabbing = true;
    }
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
}
