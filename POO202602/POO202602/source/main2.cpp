#include "Prerequisitos.h"
#include "ProgramminPatterns/chainOfResponsability/ManejadorConcretoA.h"
#include "ProgramminPatterns/chainOfResponsability/ManejadorConcretoB.h"
#include "ProgramminPatterns/chainOfResponsability/ManejadorConcretoC.h"

int main() {

  ManejadorConcretoC manejadorC(nullptr, "None");
  ManejadorConcretoB manejadorB(&manejadorC, "Manejador C");
  ManejadorConcretoA manejadorA(&manejadorB, "Manejador B");




    return 0;
}