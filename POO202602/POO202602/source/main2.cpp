#include "Prerequisitos.h"
#include "ProgramminPatterns\Builder\Builder.h"
#include "ProgramminPatterns\Builder\BuilderConcreto.h"
#include "ProgramminPatterns\Builder\Director.h"

int main() {
  Builder* builder = new BuilderConcreto();
  Director* director = new Director(builder);

  director->construct();

  Producto* producto = builder->getProducto();
  producto->show();

  delete producto;
  delete director;
  delete builder;

    return 0;
}