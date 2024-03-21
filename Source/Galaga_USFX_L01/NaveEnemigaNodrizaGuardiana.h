// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaGuardiana.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaGuardiana : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	bool puedeGenerarEscudos;
	public:
		ANaveEnemigaNodrizaGuardiana();
		FORCEINLINE bool GetPuedeGenerarEscudos() const { return puedeGenerarEscudos; }
		FORCEINLINE void SetPuedeGenerarEscudos(bool _puedeGenerarEscudos) { puedeGenerarEscudos = _puedeGenerarEscudos; }
};
