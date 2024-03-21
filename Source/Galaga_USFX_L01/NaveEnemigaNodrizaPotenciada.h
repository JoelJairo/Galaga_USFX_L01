// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaPotenciada.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaPotenciada : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	float frecuenciaDeGeneracion;
public:
	ANaveEnemigaNodrizaPotenciada();
	FORCEINLINE void SetFrecuenciaDeGeneracion(float frecuencia) { frecuenciaDeGeneracion = frecuencia; }
	FORCEINLINE float GetFrecuenciaDeGeneracion() { return frecuenciaDeGeneracion; }
	
};
