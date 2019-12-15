// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PTPlayerController.generated.h"

UCLASS()
class PT_API APTPlayerController : public APlayerController
{
	GENERATED_UCLASS_BODY()

protected:
	virtual void OnRep_Pawn() override;

	virtual void OnRep_PlayerState() override;

protected:
	virtual void Tick(float DeltaSeconds) override;

	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void OnPossess(APawn* aPawn) override;

	virtual void OnUnPossess() override;
};
