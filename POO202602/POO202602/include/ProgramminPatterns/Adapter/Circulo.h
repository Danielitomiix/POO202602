#pragma once
#include "Prerequisitos.h"

class
  Circulo {
public:
  Circulo() = default;
  ~Circulo() = default;

  void dibujarCirculo() {
    std::cout << "Dibujando un circulo" << std::endl;
  }
};