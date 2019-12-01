// Fill out your copyright notice in the Description page of Project Settings.

#include "PTCharacterBase.h"

// Sets default values
APTCharacterBase::APTCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APTCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void APTCharacterBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void APTCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APTCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APTCharacterBase::OnRep_Controller()
{
	Super::OnRep_Controller();
}

void APTCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}

void APTCharacterBase::OnRep_IsCrouched()
{
	Super::OnRep_IsCrouched();
}

void APTCharacterBase::OnRep_ReplicatedBasedMovement()
{
	Super::OnRep_ReplicatedBasedMovement();
}

void APTCharacterBase::OnRep_ReplicatedMovement()
{
	Super::OnRep_ReplicatedMovement();
}
