// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 *
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	bool estaCamuflada;

public:
	ANaveEnemigaEspia();
	FORCEINLINE bool GetEstaCamuflada() const { return estaCamuflada; }
	FORCEINLINE void SetEstaCamuflada(bool _estaCamuflada) { estaCamuflada = _estaCamuflada; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	virtual void Atacar();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
