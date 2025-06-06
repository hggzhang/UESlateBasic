// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "BasicSlateStyle.h"

class FBasicSlateCommands : public TCommands<FBasicSlateCommands>
{
public:

	FBasicSlateCommands()
		: TCommands<FBasicSlateCommands>(TEXT("BasicSlate"), NSLOCTEXT("Contexts", "BasicSlate", "BasicSlate Plugin"), NAME_None, FBasicSlateStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};