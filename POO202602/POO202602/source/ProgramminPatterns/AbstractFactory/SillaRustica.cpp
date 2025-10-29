#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/SillaRustica.h"

void SillaRustica::descripcion() const {
    std::cout << "Silla de estilo rustico." << std::endl;
}

void SillaRustica::color() const {
    std::cout << "Color marrun con acabado envejecido." << std::endl;
}