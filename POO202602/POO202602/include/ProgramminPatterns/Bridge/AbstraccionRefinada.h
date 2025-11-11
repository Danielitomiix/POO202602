#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Bridge/Abstraccion.h"

class
  AbstraccionRefinada : public Abstraccion {
public:
  AbstraccionRefinada(Implementacion* imp) : Abstraccion(imp) {}
  
  void operacion() override {
      implementacion->operacion();
  }
};