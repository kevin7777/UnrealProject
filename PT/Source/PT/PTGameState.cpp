// Fill out your copyright notice in the Description page of Project Settings.

#include "PTGameState.h"

APTGameState::APTGameState(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

void APTGameState::OnRep_GameModeClass()
{
	Super::OnRep_GameModeClass();
}

void APTGameState::OnRep_SpectatorClass()
{
	Super::OnRep_SpectatorClass();
}

void APTGameState::OnRep_ReplicatedHasBegunPlay()
{
	Super::OnRep_ReplicatedHasBegunPlay();
}

void APTGameState::OnRep_ReplicatedWorldTimeSeconds()
{
	Super::OnRep_ReplicatedWorldTimeSeconds();
}
