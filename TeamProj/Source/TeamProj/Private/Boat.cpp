#include "Boat.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ABoat::ABoat()
{
    PrimaryActorTick.bCanEverTick = true;

    // ? DefaultSceneRoot 생성 및 설정
    USceneComponent* DefaultRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    RootComponent = DefaultRoot;

    // ? AttachPoint 생성 및 부착
    PlayerAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerAttachPoint"));
    PlayerAttachPoint->SetupAttachment(RootComponent);

    // 원하는 위치에 부착 (예: 배 위쪽)
    PlayerAttachPoint->SetRelativeLocation(FVector(0.f, 0.f, 50.f));
}

void ABoat::BeginPlay()
{
    Super::BeginPlay();
}

void ABoat::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!CurrentVelocity.IsNearlyZero())
    {
        AddActorWorldOffset(CurrentVelocity * DeltaTime, true);
        CurrentVelocity *= FMath::Pow(DampingFactor, DeltaTime * 60.0f);

        if (CurrentVelocity.SizeSquared() < 0.01f)
        {
            CurrentVelocity = FVector::ZeroVector;
        }
    }
}

void ABoat::ApplyPaddleImpulse(FVector Impulse)
{
    CurrentVelocity += Impulse;
    UE_LOG(LogTemp, Warning, TEXT("Impulse Applied: %s"), *Impulse.ToString());
}

