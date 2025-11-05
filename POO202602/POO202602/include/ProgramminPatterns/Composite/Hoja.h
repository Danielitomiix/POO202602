#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns\Decorator\Componente.h"

class
Hoja : public Componente {
public:
  Hoja() = default;
  ~Hoja() = default;

  void 
  operacion() override {
      // Implementación específica de la operación para Hoja
    std::cout << "Operacion realizada en la hoja" << std::endl;
  }
};
