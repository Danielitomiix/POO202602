#pragma once
#include "Prerequisitos.h"
class ProductoA;
class ProductoB;

//Fabrica abstracta
class 
FabricaAbstracta {
public:
    virtual ProductoA* 
    crearProductoA() const = 0;
    virtual ProductoB* 
    crearProductoB() const = 0;
    virtual 
      ~FabricaAbstracta() = default;
};
