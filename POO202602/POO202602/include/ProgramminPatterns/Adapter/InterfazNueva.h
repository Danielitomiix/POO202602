#pragma once
#include "Prerequisitos.h"

class
InterfazNueva {
public:
  InterfazNueva() = default;
  ~InterfazNueva() = default;

  virtual void
  metodoNuevo() {
    std::cout << "Metodo de la interfaz nueva." << std::endl;
  }
};