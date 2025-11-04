#pragma once
#include "ProgramminPatterns\Builder\ConstrutorPizza.h"
#include "ProgramminPatterns\Builder\Pizza.h"

class
BuilderPizzaHawaiana : public ConstrutorPizza {
public:
  BuilderPizzaHawaiana() {
    pizza = new Pizza;
  }

  ~BuilderPizzaHawaiana() {
    delete pizza;
  }

  void
  buildIngredintes() override {
    pizza->addIngrediente(QUESO);
    pizza->addIngrediente(TOMATE);
    pizza->addIngrediente(JAMON);
    pizza->addIngrediente(PINA);
  }

  Pizza* 
  getPizza() override {
    return pizza;
  }

 private:
  Pizza* pizza;
};