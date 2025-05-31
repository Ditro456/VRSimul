#include "Boat.h"

ABoat::ABoat()
{
    PrimaryActorTick.bCanEverTick = true;

    CurrentVelocity = FVector::ZeroVector;
    DampingFactor = 0.97f; // 매 프레임마다 속도가 점차 줄어듦
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
        // 현재 속도만큼 이동
        AddActorWorldOffset(CurrentVelocity * DeltaTime, true);

        // 점차 감속
        CurrentVelocity *= FMath::Pow(DampingFactor, DeltaTime * 60.0f); // 프레임 보정

        // 너무 작으면 정지
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
