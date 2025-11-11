#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Bridge/Implementacion.h"

class
  ImplementacionConcretaA : public Implementacion {
public:
  ImplementacionConcretaA() = default;
  ~ImplementacionConcretaA() = default;

  void operacion() override{
      std::cout << "ImplemententacionConcretaA operacion\n";
  }
};
