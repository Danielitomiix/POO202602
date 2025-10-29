#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/AbstractFactoryMuebles/SillaModerna.h"

void SillaModerna::descripcion() const {
    std::cout << "Mesa rustica de madera maciza." << std::endl;
}

void SillaModerna::color() const {
    std::cout << "Color negro mate." << std::endl;
}