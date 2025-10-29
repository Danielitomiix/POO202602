#pragma once
#include "Silla.h"

class SillaRustica : public Silla {
  public:
    void descripcion() const override;
    void color() const override;
};
