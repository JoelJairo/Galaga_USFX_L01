// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaCamuflada.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaCamuflada : public ANaveEnemigaEspia
{
	GENERATED_BODY()
private:
	int duracionDeCamuflaje;
public:
	ANaveEnemigaEspiaCamuflada();
	FORCEINLINE int GetDuracionDeCamuflaje() const { return duracionDeCamuflaje; }
	FORCEINLINE void SetDuracionDeCamuflaje(int duracion) { duracionDeCamuflaje = duracion; }
	
};
