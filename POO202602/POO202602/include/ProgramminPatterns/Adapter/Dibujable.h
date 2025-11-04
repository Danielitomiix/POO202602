#pragma once
#include "Prerequisitos.h"

class
Dibujable {
public:
  Dibujable() = default;
  ~Dibujable() = default;

  virtual void dibujar() = 0;
};