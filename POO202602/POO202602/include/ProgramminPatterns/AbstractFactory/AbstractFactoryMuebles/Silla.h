#pragma once
#include "Mueble.h"

class Silla : public Mueble {
public:
  void descripcion() const override;
  void color() const override;

};