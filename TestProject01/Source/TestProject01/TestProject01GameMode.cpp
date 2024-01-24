// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProject01GameMode.h"
#include "TestProject01Character.h"
#include "UObject/ConstructorHelpers.h"

ATestProject01GameMode::ATestProject01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
