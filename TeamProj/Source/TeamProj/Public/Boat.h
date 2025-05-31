#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boat.generated.h"

UCLASS()
class TEAMPROJ_API ABoat : public AActor
{
    GENERATED_BODY()

public:
    ABoat();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // 외부에서 힘(impulse)를 적용하는 함수 (노에서 호출)
    void ApplyPaddleImpulse(FVector Impulse);

private:
    // 보트의 현재 이동 속도
    FVector CurrentVelocity;

    // 보트의 감속 계수 (1보다 작아야 감속됨)
    float DampingFactor;
};
