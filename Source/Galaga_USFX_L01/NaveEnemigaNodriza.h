// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadEscudos;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetCantidadEscudos() const { return cantidadEscudos; }
	FORCEINLINE void SetCantidadEscudos(int _cantidadEscudos) { cantidadEscudos = _cantidadEscudos; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};
