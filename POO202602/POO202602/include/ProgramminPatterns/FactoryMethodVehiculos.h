#pragma once
#include "Prerequisitos.h"

class 
Vehiculo {
public:
  virtual void descripcion() const = 0;  
  virtual ~Vehiculo() = default;
};

class 
Coche : public Vehiculo {
  public:
  void descripcion() const override {
    std::cout << "Soy un coche" << std::endl;
  }
};

class 
Bicicleta : public Vehiculo {
  public:
  void descripcion() const override {
    std::cout << "Soy una bicicleta" << std::endl;
  }
};

class 
FactoriaVehiculos {
  public:
  virtual Vehiculo* crearVehiculo() const = 0;
  virtual ~FactoriaVehiculos() = default;
};

class 
FactoriaCoches : public FactoriaVehiculos {
  public:
  Vehiculo* crearVehiculo() const override {
    return new Coche();
  }
};

class 
FactoriaBicicletas : public FactoriaVehiculos {
  public:
  Vehiculo* crearVehiculo() const override {
    return new Bicicleta();
  }
};


