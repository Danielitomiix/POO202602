#pragma once
#include "Prerequisitos.h"

enum
INGREDINTES{
  QUESO = 1,
  TOMATE = 2,
  ACEITUNAS = 3,
  JAMON = 4,
  CHAMPINONES = 5,
  PINA = 6
};

class
Pizza {
public:
    Pizza() = default;
    ~Pizza() = default;

    void
    addIngrediente(INGREDINTES ingrediente) {
      ingrediente = ingrediente;
      ingredientes.push_back(ingrediente);
    }

    void 
    show() {
      std::cout << "Pizza con los siguientes ingredientes:\n";
      for (const auto& ingrediente : ingredientes) {
        switch (ingrediente) {
          case QUESO:
            std::cout << "- Queso\n" ;
            break;
          case TOMATE:
            std::cout << "- Tomate\n";
            break;
          case ACEITUNAS:
            std::cout << "- Aceitunas\n";
            break;
          case JAMON:
            std::cout << "- Jamon\n";
            break;
          case CHAMPINONES:
            std::cout << "- Champinones\n";
            break;
          case PINA:
            std::cout << "- Pina\n";
            break;
          default:
            std::cout << "- Ingrediente desconocido" << std::endl;
            break;
        }
      }
    }

private:
  INGREDINTES ingrediente;
  std::vector<INGREDINTES> ingredientes;
};