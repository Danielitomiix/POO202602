#include "Prerequisitos.h"
#include "ProgramminPatterns\Builder\ConstrutorPizza.h"
#include "ProgramminPatterns\Builder\BuilderPizzaHawaiana.h"
#include "ProgramminPatterns/Builder/BuilderPizzaVegetariana.h"
#include "ProgramminPatterns\Builder\Pizza.h"

int main() {
  ConstrutorPizza* construtorHawaiana = new BuilderPizzaHawaiana();
  construtorHawaiana->buildIngredintes();
  Pizza* pizzaHawaiana = construtorHawaiana->getPizza();

  std::cout << "Pizza Hawaiana:\n";
  pizzaHawaiana->show();

  ConstrutorPizza* construtorVegetariana = new BuilderPizzaVegetariana();
  construtorVegetariana->buildIngredintes();
  Pizza* pizzaVegetariana = construtorVegetariana->getPizza();

  std::cout << "Pizza Vegetariana:\n";
  pizzaVegetariana->show();

  delete construtorHawaiana;
  delete pizzaHawaiana;
  delete construtorVegetariana;
  delete pizzaVegetariana;

    return 0;
}