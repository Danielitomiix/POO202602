#pragma once
#include "ProgramminPatterns/Prototype/DocumentoPrototype.h"
#include "ProgramminPatterns/Prototype/Documento.h"

class
DocumentoImagen : public DocumentoPrototype {
public:
  DocumentoImagen() = default;
  ~DocumentoImagen() = default;

  DocumentoPrototype* clonar() const override {
    DocumentoImagen* copia = new DocumentoImagen();
    copia->config(contenido);
    return copia;
  }

  void
  config(const std::string& _contenido) override {
    contenido = " Imagen " + _contenido;
  }
  void
  Info() const override {
    std::cout << "Documento de Imagen -> " << contenido << std::endl;
  }
private:
  std::string contenido;
};