// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PTGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "PTPlayerController.h"
#include "PTHUD.h"
#include "PTGameState.h"
#include "PTPlayerState.h"

APTGameMode::APTGameMode(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PlayerControllerClass = APTPlayerController::StaticClass();

	HUDClass = APTHUD::StaticClass();

	GameStateClass = APTGameState::StaticClass();

	PlayerStateClass = APTPlayerState::StaticClass();
}

void APTGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void APTGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void APTGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}
