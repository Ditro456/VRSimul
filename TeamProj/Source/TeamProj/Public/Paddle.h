#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paddle.generated.h"

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

    UFUNCTION(BlueprintCallable)
    void GrabObject(USceneComponent* Controller);

    UFUNCTION(BlueprintCallable)
    void ReleaseObject(USceneComponent* Controller);

protected:
    USceneComponent* PrimaryHand;
    USceneComponent* SecondaryHand;

    // 블루프린트에서 이름으로 설정한 컴포넌트
    USceneComponent* GrabPointPrimary;
    USceneComponent* GrabPointSecondary;

    bool bIsTwoHandGrabbing;
};
