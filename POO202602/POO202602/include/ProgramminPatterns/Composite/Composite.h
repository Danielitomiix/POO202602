#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns\Decorator\Componente.h"

class
Composite : public Componente {
public:
  Composite() = default;
  ~Composite() = default;

  void operacion() override {
    std::cout << "Operacion realizada en el componente compuesto" << std::endl;
    for (auto& child : children) {
      child->operacion();
    }
  }
  void 
  add(Componente* componente) {
    children.push_back(componente);
  }

  private:
    std::vector<Componente*> children;
};