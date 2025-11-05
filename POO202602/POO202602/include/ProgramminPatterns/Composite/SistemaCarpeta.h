#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Composite/Carpeta.h"
#include "ProgramminPatterns/Composite/Sistema.h"

class
SistemaCarpeta : public Carpeta, public Sistema {
public:
  SistemaCarpeta() = default;
  ~SistemaCarpeta() = default;

  void agregarSistema(Sistema* sistema) {
    sistemas.push_back(sistema);
  }

  void info() override {
    std::cout << "Sistema Carpeta: Soy una carpeta del sistema." << std::endl;
    for (auto sistema : sistemas) {
      sistema->info();
    }
  }

private:
  std::vector<Sistema*> sistemas;
};