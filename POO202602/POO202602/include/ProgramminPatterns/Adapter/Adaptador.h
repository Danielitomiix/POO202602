#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns\Adapter\InterfazVieja.h"
#include "ProgramminPatterns\Adapter\InterfazNueva.h"

class
Adaptador : public InterfazNueva {
public:
  Adaptador(InterfazVieja* interfazVieja) : interfazVieja_(interfazVieja) {}
  ~Adaptador() = default;


  void
  metodoNuevo() override {
    std::cout << "Adaptando metodo nuevo a metodo viejo." << std::endl;
    interfazVieja_->metodoViejo();
  }

private:
  InterfazVieja* interfazVieja_;
};