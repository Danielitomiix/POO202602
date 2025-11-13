#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/chainOfResponsability/Manejador.h"


class
ManejadorConcretoC : public Manejador {
public:
  ManejadorConcretoC(Manejador* _siguiente, const std::string _name)
    : Manejador(_siguiente, _name) {
  }
  ~ManejadorConcretoC() = default;

  void
    manejarPeticion(int peticion) override {
    if (peticion >= 0 && peticion < 30) {
      std::cout << "Manejador ConcretoC manejo la peticion: " << peticion << std::endl;
    }
    else {
      Manejador::manejarPeticion(peticion);
    }
  }
};