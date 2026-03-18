// Fill out your copyright notice in the Description page of Project Settings.


#include "LockActor.h"

// Sets default values
ALockActor::ALockActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));
	SetRootComponent(RootComp);

	TriggerComp = CreateDefaultSubobject<UTriggerComponent>(TEXT("Trigger Comp"));
	TriggerComp->SetupAttachment(RootComp);

	KeyItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Key Item Mesh"));
	KeyItemMesh->SetupAttachment(RootComp);

	Tags.Add("Lock");

	TriggerComp->Trigger(false);
	KeyItemMesh->SetVisibility(false);

}

// Called when the game starts or when spawned
void ALockActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALockActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALockActor::SetIsKeyPlaced(bool NewIsKeyPlaced)
{
	IsKeyPlaced = NewIsKeyPlaced;

	TriggerComp->Trigger(NewIsKeyPlaced);
	KeyItemMesh->SetVisibility(NewIsKeyPlaced);
}

bool ALockActor::GetIsKeyPlaced()
{
	return IsKeyPlaced;
}
