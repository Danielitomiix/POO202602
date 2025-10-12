#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/FabricaAbstracta.h"
#include "ProgramminPatterns/AbstractFactory/ProductoB1.h"
#include "ProgramminPatterns/AbstractFactory/ProductoA1.h"

class
FabricaConcreta : public FabricaAbstracta {
 public:
  ProductoA* 
  crearProductoA() const override {
    return new ProductoA1();
  }
  ProductoB* 
  crearProductoB() const override {
    return new ProductoB1();
  }
};