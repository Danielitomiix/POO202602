#pragma once
#include "Prerequisitos.h"

class
Archivo {
public:
  Archivo() = default;
  ~Archivo() = default;

  virtual void info() {
    std::cout << "Soy un archivo." << std::endl;
  }
};