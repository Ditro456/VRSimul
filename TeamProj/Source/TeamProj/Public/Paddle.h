#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paddle.generated.h"

class USceneComponent;
class ABoat;

UCLASS()
class TEAMPROJ_API APaddle : public AActor
{
    GENERATED_BODY()

public:
    APaddle();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "VR Grab")
    void GrabObject(USceneComponent* Controller);

    UFUNCTION(BlueprintCallable, Category = "VR Grab")
    void ReleaseObject(USceneComponent* Controller);

    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

private:
    UPROPERTY()
    USceneComponent* GrabPointPrimary;

    UPROPERTY()
    USceneComponent* GrabPointSecondary;

    UPROPERTY()
    USceneComponent* PrimaryHand;

    UPROPERTY()
    USceneComponent* SecondaryHand;

    UPROPERTY()
    ABoat* CurrentBoat;

    bool bIsTwoHandGrabbing;
    bool bIsTouchingWater;
};
