#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/Silla.h"

void Silla::descripcion() const {
  std::cout << "Esta es una silla moderna." << std::endl;
}

void Silla::color() const {
  std::cout << "La silla es de color negro." << std::endl;
}
