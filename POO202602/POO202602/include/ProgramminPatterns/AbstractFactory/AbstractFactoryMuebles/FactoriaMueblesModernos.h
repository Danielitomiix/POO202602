#pragma once
#include "FactoriaMuebles.h"
#include "MesaModerna.h"
#include "SillaModerna.h"

class FactoriaMueblesModernos : public FactoriaMuebles {
  public:
    Silla* crearSilla() const override {
        return new SillaModerna();
    }
    Mesa* crearMesa() const override {
        return new MesaModerna();
    }
};
