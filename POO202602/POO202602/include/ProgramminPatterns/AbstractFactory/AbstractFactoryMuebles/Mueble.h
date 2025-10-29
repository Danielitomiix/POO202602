#pragma once
#include "Prerequisitos.h"

class Mueble {
  public:
    virtual void descripcion() const = 0;
    virtual void color() const = 0;
    virtual ~Mueble() {}
};