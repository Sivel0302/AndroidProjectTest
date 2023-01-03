// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidProjectTestGameMode.h"
#include "AndroidProjectTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidProjectTestGameMode::AAndroidProjectTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
