#pragma once
#include "Silla.h"
#include "Mesa.h"

class FactoriaMuebles {
  public:
    virtual Silla* crearSilla() const = 0;
    virtual Mesa* crearMesa() const = 0;
    virtual ~FactoriaMuebles() = default;
};