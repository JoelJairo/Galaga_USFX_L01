// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaHackeadora.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaHackeadora : public ANaveEnemigaEspia
{
	GENERATED_BODY()
private:
	bool puedeHackear;

public:
	ANaveEnemigaEspiaHackeadora();
	FORCEINLINE bool GetPuedeHackear() const { return puedeHackear; }
	FORCEINLINE void SetPuedeHackear(bool _puedeHackear) { puedeHackear = _puedeHackear; }
	
};
