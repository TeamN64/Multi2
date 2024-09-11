// Copyright Epic Games, Inc. All Rights Reserved.

#include "Multip2GameMode.h"
#include "Multip2Character.h"
#include "UObject/ConstructorHelpers.h"

AMultip2GameMode::AMultip2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
