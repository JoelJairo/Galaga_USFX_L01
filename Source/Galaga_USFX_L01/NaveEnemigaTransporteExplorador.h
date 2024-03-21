// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteExplorador.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteExplorador : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
private:
	bool puedeDesplegarTropas;
	public:
		ANaveEnemigaTransporteExplorador();
		FORCEINLINE bool GetPuedeDesplegarTropas() const { return puedeDesplegarTropas; }
		FORCEINLINE void SetPuedeDesplegarTropas(bool value) { puedeDesplegarTropas = value; }
	
};
