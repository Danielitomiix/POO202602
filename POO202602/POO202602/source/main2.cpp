#include "Prerequisitos.h"
#include "ProgramminPatterns/Bridge/ImplementacionConcretaA.h"
#include "ProgramminPatterns/Bridge/ImplementacionConcretaB.h"
#include "ProgramminPatterns/Bridge/Abstraccion.h"
#include "ProgramminPatterns/Bridge/AbstraccionRefinada.h"
#include "ProgramminPatterns/Bridge/Implementacion.h"


int main() {
  ImplementacionConcretaA impA;
  ImplementacionConcretaB impB;

  AbstraccionRefinada abstraccionA(&impA);
  AbstraccionRefinada abstraccionB(&impB);

  abstraccionA.operacion();
  abstraccionB.operacion();

    return 0;
}