#pragma once
#include "ProgramminPatterns/Prototype/DocumentoPrototype.h"
#include "ProgramminPatterns/Prototype/Documento.h"

class
DocumentoTexto : public DocumentoPrototype {
public:
  DocumentoTexto() = default;
  ~DocumentoTexto() = default;

  DocumentoPrototype* clonar() const override {
    DocumentoTexto* copia = new DocumentoTexto();
    copia->config(contenido);
    return copia;
  }

  void
  config(const std::string& _contenido) override {
    contenido = " Texto " +_contenido;
  }
  void
  Info() const override {
    std::cout << "Documento de Texto -> " << contenido << std::endl;
  }

private:
  std::string contenido;
};

