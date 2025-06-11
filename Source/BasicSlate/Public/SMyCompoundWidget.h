// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class STextBlock;
class SButton;

/**
 * 
 */
class BASICSLATE_API SMyCompoundWidget : public SCompoundWidget
{

private:
	TSharedPtr<STextBlock> MyTextWidget;
	FText MyText;
	FReply HandBtnClick();

public:
	SLATE_BEGIN_ARGS(SMyCompoundWidget) : _InitText(FText::FromString("Click Btn"))
	{}
	SLATE_ARGUMENT(FText, InitText)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);
};
