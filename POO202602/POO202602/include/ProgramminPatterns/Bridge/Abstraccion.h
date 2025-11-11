#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Bridge/Implementacion.h"

class
  Abstraccion {
public:
  Abstraccion(Implementacion* imp) : implementacion(imp) {}
 
  virtual void operacion() = 0;

protected:
  Implementacion* implementacion;
};
