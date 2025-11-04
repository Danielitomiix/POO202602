#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Adapter/Circulo.h"
#include "ProgramminPatterns/Adapter/Dibujable.h"

class
  CirculoAdapter : public Dibujable {
public:
  CirculoAdapter(Circulo* _circulo) : circulo(_circulo) {}
  ~CirculoAdapter() = default;


  void dibujar() override {
    std::cout << "Adaptando dibujo de circulo." << std::endl;
    circulo->dibujarCirculo();
  }

private:
  Circulo* circulo;
};