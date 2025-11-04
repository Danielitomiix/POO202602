#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Decorator/Condimento.h"

class
Leche : public Condimento {
public:
  Leche(Cafeteria* _cafeteria) : Condimento(_cafeteria) {}
  ~Leche() = default;

  void prepararCafe() override {
    Condimento::prepararCafe();
    std::cout << "Agregando leche al cafe." << std::endl;
  }
};