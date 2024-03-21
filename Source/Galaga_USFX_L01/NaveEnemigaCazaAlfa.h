// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaAlfa : public ANaveEnemigaCaza
{
    GENERATED_BODY()
private:
    bool TienePropulsoresMejorados;

public:
    ANaveEnemigaCazaAlfa();
    // Getter para TienePropulsoresMejorados
    FORCEINLINE bool GetTienePropulsoresMejorados() const { return TienePropulsoresMejorados; }

    // Setter para TienePropulsoresMejorados
    FORCEINLINE void SetTienePropulsoresMejorados(bool _TienePropulsoresMejorados) { TienePropulsoresMejorados = _TienePropulsoresMejorados; }
};