#pragma once
#include "Prerequisitos.h"

class
InterfazVieja {
public:
  InterfazVieja() = default;
  ~InterfazVieja() = default;

  virtual void
  metodoViejo() {
    std::cout << "Metodo de la interfaz vieja." << std::endl;
  }
};