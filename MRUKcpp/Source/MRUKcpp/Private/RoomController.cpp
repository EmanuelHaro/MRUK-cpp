// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomController.h"
#include "MRUtilityKitSubsystem.h"
//#include "Plugins\Marketplace\MetaXR\source\MRUtilityKit\Public\MRUtilityKitSubsystem.h"

// Sets default values
ARoomController::ARoomController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARoomController::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void ARoomController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ARoomController::TrackNewRoom()
{

	return false;
}

