#pragma once
#include "FactoriaMuebles.h"
#include "MesaRustica.h"
#include "SillaRustica.h"

class FactoriaMueblesRusticos : public FactoriaMuebles {
  public:
    Mesa* crearMesa() const override {
        return new MesaRustica();
    }
    Silla* crearSilla() const override {
        return new SillaRustica();
    }
};