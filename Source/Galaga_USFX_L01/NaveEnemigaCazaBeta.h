// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaBeta : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	float VelocidadAdicional;

	public:
	ANaveEnemigaCazaBeta();
	FORCEINLINE void SetVelocidadAdicional(float _VelocidadAdicional) { VelocidadAdicional = _VelocidadAdicional; }
	FORCEINLINE float GetVelocidadAdicional() { return VelocidadAdicional; }
	
};
