// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float capacidadDeReabastecer;

public:
	ANaveEnemigaReabastecimiento();
	FORCEINLINE float GetCapacidadDeReabastecer() const { return capacidadDeReabastecer; }
	FORCEINLINE void SetCapacidadDeReabastecer(float _capacidadDeReabastecer) { capacidadDeReabastecer = _capacidadDeReabastecer; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();
};

