#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Bridge/Implementacion.h"

class
  ImplementacionConcretaB : public Implementacion {
public:
  ImplementacionConcretaB() = default;
  ~ImplementacionConcretaB() = default;

  void operacion() override {
    std::cout << "ImplementacionConcretaB operacion\n";
  }
};
