#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Composite/Archivo.h"
#include "ProgramminPatterns/Composite/Sistema.h"

class
  SistemaArchivo : public Archivo, public Sistema {
public:
  SistemaArchivo() = default;
  ~SistemaArchivo() = default;

  void info() override {
    std::cout << "Sistema Archivo: Soy un sistema de archivos." << std::endl;
  }
};
