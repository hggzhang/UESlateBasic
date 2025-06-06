// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicSlateCommands.h"

#define LOCTEXT_NAMESPACE "FBasicSlateModule"

void FBasicSlateCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "BasicSlate", "Bring up BasicSlate window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
