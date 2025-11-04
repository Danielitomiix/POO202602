#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Adapter/Cuadrado.h"
#include "ProgramminPatterns/Adapter/Dibujable.h"

class
CuadradoAdapter : public Dibujable {
public:
  CuadradoAdapter(Cuadrado* _cuadrado) : cuadrado(_cuadrado) {}
  ~CuadradoAdapter() = default;

  void dibujar() override {
    std::cout << "Adaptando dibujo de cuadrado." << std::endl;
    cuadrado->dibujarCuadrado();
  }

private:
  Cuadrado* cuadrado;
};