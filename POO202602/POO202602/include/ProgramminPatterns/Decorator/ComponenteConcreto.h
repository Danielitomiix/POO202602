#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Decorator/Componente.h"

class 
ComponenteConcreto : public Componente {
public:
  ComponenteConcreto() = default;
  ~ComponenteConcreto() = default;

  void 
  operacion() {
    std::cout << "ComponenteConcreto: Realizando operacion concreta" << std::endl;
  }
};