#pragma once
#include "Prerequisitos.h"

class
Dispositivo {
public:
  Dispositivo() = default;
  ~Dispositivo() = default;

  void encenderDispositivo() {
    std::cout << "Dispositivo encendido" << std::endl;
  }
  void apagarDispositivo() {
    std::cout << "Dispositivo apagado" << std::endl;
  }
};
