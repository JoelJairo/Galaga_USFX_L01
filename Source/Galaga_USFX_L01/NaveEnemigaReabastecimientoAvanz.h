// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoAvanz.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoAvanz : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
private:
	bool PuedeRepararNaves;
public:
	ANaveEnemigaReabastecimientoAvanz();
	FORCEINLINE bool GetPuedeRepararNaves() const { return PuedeRepararNaves; }
	FORCEINLINE void SetPuedeRepararNaves(bool value) { PuedeRepararNaves = value; }

	
};
