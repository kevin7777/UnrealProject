// Fill out your copyright notice in the Description page of Project Settings.

#include "PTPlayerController.h"

APTPlayerController::APTPlayerController(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

void APTPlayerController::OnRep_Pawn()
{
	Super::OnRep_Pawn();
}

void APTPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}

void APTPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void APTPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void APTPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void APTPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
}
