#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/ProductoB.h"

//Producto Concreto B1
class
  ProductoB1 : public ProductoB {
public:
  void
    operacionB() const override;
};
