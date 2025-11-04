#pragma once
#include "Prerequisitos.h"
#include "ProgramminPatterns/Builder/Builder.h"
#include "ProgramminPatterns/Builder/Producto.h"

class
BuilderConcreto : public Builder {
public:
  BuilderConcreto();
  ~BuilderConcreto() = default;

  void buildParteA() override;
  void buildParteB() override;
  Producto* getProducto() override;

private:
  Producto* producto;
};