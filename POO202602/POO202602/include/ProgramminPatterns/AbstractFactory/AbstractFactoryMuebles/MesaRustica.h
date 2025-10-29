#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/Mesa.h"

class MesaRustica : public Mesa {
  public:
    void descripcion() const override;
    void color() const override;
};