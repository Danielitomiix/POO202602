#include "Prerequisitos.h"
#include "ProgramminPatterns/Adapter/Circulo.h"
#include "ProgramminPatterns/Adapter/CirculoAdapter.h"
#include "ProgramminPatterns/Adapter/Cuadrado.h"
#include "ProgramminPatterns/Adapter/CuadradoAdapter.h"



int main() {
  // Crear instancias de las clases existentes
  Circulo* circulo = new Circulo();
  Cuadrado* cuadrado = new Cuadrado();

  //Adaptalar a la interfaz Dibujable
  Dibujable* circuloAdaptado = new CirculoAdapter(circulo);
  Dibujable* cuadradoAdaptado = new CuadradoAdapter(cuadrado);

  // Uso los adaptadores para dibujar
  std::cout << " Dibujos adaptados" << std::endl;
  circuloAdaptado->dibujar();
  cuadradoAdaptado->dibujar();

  // Liberar memoria
  delete circuloAdaptado;
  delete cuadradoAdaptado;
  delete circulo;
  delete cuadrado;


    return 0;
}