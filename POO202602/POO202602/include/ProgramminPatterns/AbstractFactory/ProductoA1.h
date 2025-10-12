#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/AbstractFactory/ProductoA.h"

//Producto Concreto A1
class
ProductoA1 : public ProductoA {
 public:
   void 
   operacionA() const override;
};
