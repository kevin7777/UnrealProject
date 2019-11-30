// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PTGameState.generated.h"

UCLASS()
class PT_API APTGameState : public AGameStateBase
{
	GENERATED_UCLASS_BODY()

protected:
	virtual void OnRep_GameModeClass() override;

	virtual void OnRep_SpectatorClass() override;

	virtual void OnRep_ReplicatedHasBegunPlay() override;

	virtual void OnRep_ReplicatedWorldTimeSeconds() override;
};
