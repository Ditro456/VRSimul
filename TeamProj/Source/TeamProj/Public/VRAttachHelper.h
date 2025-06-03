#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRAttachHelper.generated.h"

UCLASS()
class TEAMPROJ_API AVRAttachHelper : public AActor
{
    GENERATED_BODY()

public:
    AVRAttachHelper(); // ? 선언이 있어야 함

    UFUNCTION(BlueprintCallable)
    void AttachVRPawnToNearestBoat(AActor* VRPawn);

    UFUNCTION(BlueprintCallable)
    void DetachVRPawn(AActor* VRPawn);

private:
    TMap<AActor*, FVector> OriginalLocations;
};
