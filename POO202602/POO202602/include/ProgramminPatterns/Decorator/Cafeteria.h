#pragma once
#include "Prerequisitos.h"

class
  Cafeteria {
public:
  Cafeteria() = default;
  ~Cafeteria() = default;

  virtual void prepararCafe() {
    std::cout << "Preparando cafe basico." << std::endl;
  }
};