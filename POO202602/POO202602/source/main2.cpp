#include "Prerequisitos.h"
#include "ProgramminPatterns\Prototype\DocumentoTexto.h"
#include "ProgramminPatterns\Prototype\DocumentoImagen.h"



int main() {
  DocumentoPrototype* docTexto1 = new DocumentoTexto();
  docTexto1->config("Este es un documento de texto.");

  DocumentoPrototype* docImagen1 = new DocumentoImagen();
  docImagen1->config("Este es un documento de imagen.");

  DocumentoPrototype* docTexto2 = docTexto1->clonar();
  DocumentoPrototype* docImagen2 = docImagen1->clonar();

  std::cout << " Originales " << std::endl;
  docTexto1->Info();
  docImagen1->Info();
  
  std::cout << " Clonandos " << std::endl;
  docTexto2->Info();
  docImagen2->Info();

  // Liberar memoria
  delete docTexto1;
  delete docImagen1;
  delete docTexto2;
  delete docImagen2;

    return 0;
}