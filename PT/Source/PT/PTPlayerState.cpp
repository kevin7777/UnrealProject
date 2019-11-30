// Fill out your copyright notice in the Description page of Project Settings.

#include "PTPlayerState.h"

APTPlayerState::APTPlayerState(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

void APTPlayerState::OnRep_Score()
{
	Super::OnRep_Score();
}

void APTPlayerState::OnRep_PlayerName()
{
	Super::OnRep_PlayerName();
}

void APTPlayerState::OnRep_bIsInactive()
{
	Super::OnRep_bIsInactive();
}

void APTPlayerState::OnRep_PlayerId()
{
	Super::OnRep_PlayerId();
}

void APTPlayerState::OnRep_UniqueId()
{
	Super::OnRep_UniqueId();
}
