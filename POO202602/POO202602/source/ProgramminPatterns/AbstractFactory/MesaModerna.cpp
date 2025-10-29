#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/MesaModerna.h"

void MesaModerna::descripcion() const {
 std::cout << "Mesa moderna de vidrio templado." << std::endl;
}

void MesaModerna::color()  const {
  std::cout << "Color gris metallico." << std::endl;
}