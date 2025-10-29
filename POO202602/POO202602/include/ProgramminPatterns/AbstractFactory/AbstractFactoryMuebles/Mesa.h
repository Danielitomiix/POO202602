#pragma once
#include "Mueble.h"

class Mesa : public Mueble {
public:
  void descripcion() const override;
  void color() const override;

};