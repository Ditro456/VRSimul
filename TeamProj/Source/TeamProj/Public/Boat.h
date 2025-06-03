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

    void ApplyPaddleImpulse(FVector Impulse);


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Boat")
    USceneComponent* PlayerAttachPoint;  // ? ¼±¾ðµÊ

private:
    FVector CurrentVelocity;
    float DampingFactor;
};
