// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteRefuerzo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteRefuerzo : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
private:
	bool puedeReforzar;
	public:
		ANaveEnemigaTransporteRefuerzo();
		FORCEINLINE bool GetPuedeReforzar() const { return puedeReforzar; }
		FORCEINLINE void SetPuedeReforzar(bool value) { puedeReforzar = value; }
};
