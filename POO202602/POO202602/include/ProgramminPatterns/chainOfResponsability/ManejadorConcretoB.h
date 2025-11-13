#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/chainOfResponsability/Manejador.h"


class
ManejadorConcretoB : public Manejador {
public:
  ManejadorConcretoB(Manejador* _siguiente, const std::string _name)
    : Manejador(_siguiente, _name) {
  }
  ~ManejadorConcretoB() = default;

  void
    manejarPeticion(int peticion) override {
    if (peticion >= 0 && peticion < 20) {
      std::cout << "Manejador ConcretoB manejo la peticion: " << peticion << std::endl;
    }
    else {
      Manejador::manejarPeticion(peticion);
    }
  }
};