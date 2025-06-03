#include "VRAttachHelper.h"
#include "Boat.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "EngineUtils.h"

AVRAttachHelper::AVRAttachHelper()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AVRAttachHelper::AttachVRPawnToNearestBoat(AActor* VRPawn)
{
    if (!VRPawn) return;

    float ClosestDistance = FLT_MAX;
    ABoat* ClosestBoat = nullptr;

    for (TActorIterator<ABoat> It(GetWorld()); It; ++It)
    {
        ABoat* Boat = *It;
        if (!Boat || !Boat->PlayerAttachPoint) continue;

        float Dist = FVector::Dist(VRPawn->GetActorLocation(), Boat->PlayerAttachPoint->GetComponentLocation());
        if (Dist < ClosestDistance)
        {
            ClosestDistance = Dist;
            ClosestBoat = Boat;
        }
    }

    if (ClosestBoat && ClosestBoat->PlayerAttachPoint)
    {
        OriginalLocations.FindOrAdd(VRPawn) = VRPawn->GetActorLocation();
        VRPawn->AttachToComponent(ClosestBoat->PlayerAttachPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
        UE_LOG(LogTemp, Warning, TEXT("Attached to boat: %s"), *ClosestBoat->GetName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No boat found to attach VRPawn"));
    }
}

void AVRAttachHelper::DetachVRPawn(AActor* VRPawn)
{
    if (!VRPawn) return;

    FVector* StoredLocation = OriginalLocations.Find(VRPawn);
    if (StoredLocation)
    {
        VRPawn->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        VRPawn->SetActorLocation(*StoredLocation);
        UE_LOG(LogTemp, Warning, TEXT("VRPawn detached and returned to original location."));
        OriginalLocations.Remove(VRPawn);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No stored location for VRPawn."));
    }
}
