#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Decorator/Decorator.h"

class
  DecoratorConcretoB : public Decorator {
public:
  DecoratorConcretoB(Componente* _componente)
    : Decorator(_componente) {
  }
  ~DecoratorConcretoB() = default;
  void
    operacion() override {
    Decorator::operacion();
    std::cout << "DecoratorConcretob: Agregando funcionalidad B" << std::endl;
  }
};
