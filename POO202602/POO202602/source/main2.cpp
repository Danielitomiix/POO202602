#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/FactoriaMueblesRusticos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/FactoriaMueblesModernos.h"



int main() {
  
  FactoriaMuebles* fabrica = new FactoriaMueblesRusticos();
  Silla* silla = fabrica->crearSilla();
  Mesa* mesa = fabrica->crearMesa();

  silla->descripcion();
  silla->color();

  mesa->descripcion();
  mesa->color();

  delete fabrica;
  delete silla;
  delete mesa;
  
    return 0;
}