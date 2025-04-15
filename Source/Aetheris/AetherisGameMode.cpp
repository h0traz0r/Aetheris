// Copyright Epic Games, Inc. All Rights Reserved.

#include "AetherisGameMode.h"
#include "AetherisCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAetherisGameMode::AAetherisGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
