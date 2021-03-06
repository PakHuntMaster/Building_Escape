// Copyright Azeem Iqbal 2019


#include "Position_Report.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UPosition_Report::UPosition_Report()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPosition_Report::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectPos = GetOwner()->GetTransform().GetLocation().ToString();
	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("The object %s is at %s"), *ObjectName, *ObjectPos);
	
}


// Called every frame
void UPosition_Report::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
