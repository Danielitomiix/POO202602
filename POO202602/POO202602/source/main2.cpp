#include "Prerequisitos.h"
#include "ProgramminPatterns\Decorator\Cafeteria.h"
#include "ProgramminPatterns\Decorator\leche.h"
#include "ProgramminPatterns\Decorator\Azucar.h"



int main() {
  Cafeteria* cafeteria = new Cafeteria();
  Leche* cafeConLeche = new Leche(cafeteria);
  Azucar* cafeConAzucar = new Azucar(cafeteria);

  std::cout << "Cafe basico:" << std::endl;
  cafeteria->prepararCafe();

  std::cout << "\nCafe con leche:" << std::endl;
  cafeConLeche->prepararCafe();

  std::cout << "\nCafe con azucar:" << std::endl;
  cafeConAzucar->prepararCafe();

  delete cafeConAzucar;
  delete cafeConLeche;
  delete cafeteria;

    return 0;
}