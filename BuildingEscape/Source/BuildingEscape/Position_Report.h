// Copyright Azeem Iqbal 2019

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Position_Report.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UPosition_Report : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPosition_Report();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
