#pragma once
#include "Prerequisitos.h"

//Clase base para producto A
class 
ProductoA {
  public:
    virtual void 
    operacionA() const = 0;
  
    virtual 
    ~ProductoA() = default;
};