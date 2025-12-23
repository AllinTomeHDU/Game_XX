// Copyright: Jichao Luo

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "XXPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

/**
 * 
 */
UCLASS()
class XX_API AXXPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AXXPlayerController();

protected:
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;



private:


};
