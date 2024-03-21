// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoDrone.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoDrone : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
private:
	int numeroDeDrones;
public:
	ANaveEnemigaReabastecimientoDrone();
	FORCEINLINE int GetNumeroDeDrones() const { return numeroDeDrones; }
	FORCEINLINE void SetNumeroDeDrones(int numero) { numeroDeDrones = numero; }
	
};
