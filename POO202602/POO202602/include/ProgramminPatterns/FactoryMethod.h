#pragma once
#include "Prerequisitos.h"

//Producto abstracto
class 
Producto {
  public:
  virtual void Operacion() = 0;
  virtual ~Producto() = default;
};

//Clase base  para la fabrica
class 
Fabrica {
  public:
  virtual Producto* CrearProducto() const = 0;
  virtual ~Fabrica() = default;
};

//Producto concreto A
class 
ProductoA : public Producto {
  public:
  void Operacion() override {
     std::cout << "Operacion del Producto A" << std::endl;
    }
};

//Fabrica concreta A
class
FabricaA : public Fabrica {
  public:
  Producto* CrearProducto() const override {
     return new ProductoA();
    }
};