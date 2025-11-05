#pragma once
#include "Prerequisitos.h"

class
Carpeta {
public:
  Carpeta() = default;
  ~Carpeta() = default;

  virtual void info() {
    std::cout << "Soy una carpeta." << std::endl;
  }
};