// Copyright Azeem Iqbal 2019

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Components/ActorComponent.h"
#include "Open_Door.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpen_Door : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpen_Door();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:
	UPROPERTY(EditAnywhere)
	float OpenAngle = -90.0f;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* PresurePlate;
	
	UPROPERTY(EditAnywhere)
	float DoorCloseDelay = 1.0f;

	float LastDoorOpenTime;

	AActor* ActorThatOpens;	// Remember Pawn Inherits from Actor
	AActor* Owner; // The Owning Door
};
