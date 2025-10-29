#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/MesaRustica.h"

void MesaRustica::descripcion() const {
    std::cout << "Mesa rustica de madera maciza." << std::endl;
}

void MesaRustica::color() const {
    std::cout << "Color marrun oscuro con acabado envejecido." << std::endl;
}