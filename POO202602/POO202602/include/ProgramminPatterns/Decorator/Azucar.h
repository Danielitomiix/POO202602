#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Decorator/Condimento.h"

class
Azucar : public Condimento {
public:
  Azucar(Cafeteria* _cafeteria) : Condimento(_cafeteria) {}
  ~Azucar() = default;

  void prepararCafe() override {
    Condimento::prepararCafe();
    std::cout << "Agregando azucar al cafe." << std::endl;
  }
};