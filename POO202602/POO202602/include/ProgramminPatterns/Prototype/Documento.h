#pragma once
#include "Prerequisitos.h"

class
  Documento {
public:
  Documento() = default;
  ~Documento() = default;

  void
  config(const std::string& _contenido) {
    contenido = _contenido;
  }

  void
    info() const {
    std::cout << "Contenido del documento: " << contenido << std::endl;
  }
  private:
    std::string contenido;
};