#include "ProgramminPatterns/Builder/BuilderConcreto.h"

BuilderConcreto::BuilderConcreto() {
  producto = new Producto();
}

void
BuilderConcreto::buildParteA() {
 if(producto) {
   producto->add("ParteA");
 }
}

void
BuilderConcreto::buildParteB() {
  if(producto) {
    producto->add("ParteB");
  }
}

Producto*
BuilderConcreto::getProducto() {
 if (producto) {
   return producto;
 }
 return nullptr;
}