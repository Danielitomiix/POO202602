#pragma once
#include "ProgramminPatterns/Builder/ConstrutorPizza.h"
#include "ProgramminPatterns/Builder/Pizza.h"

class
BuilderPizzaVegetariana : public ConstrutorPizza {
public:
  BuilderPizzaVegetariana() {
    pizza = new Pizza;
  }

  ~BuilderPizzaVegetariana() {
    delete pizza;
  }

  void
  buildIngredintes() override {
    pizza->addIngrediente(QUESO);
    pizza->addIngrediente(TOMATE);
    pizza->addIngrediente(ACEITUNAS);
    pizza->addIngrediente(CHAMPINONES);
  }

  Pizza* 
  getPizza() override {
    return pizza;
  }

 private:
  Pizza* pizza;
};