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
    // Getter para TienePropulsoresMejorados
    bool GetTienePropulsoresMejorados() const { return TienePropulsoresMejorados; }

    // Setter para TienePropulsoresMejorados
    void SetTienePropulsoresMejorados(bool NuevoValor) { TienePropulsoresMejorados = NuevoValor; }
};