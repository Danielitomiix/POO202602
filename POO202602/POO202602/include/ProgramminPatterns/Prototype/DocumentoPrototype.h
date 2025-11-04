#pragma once
#include "Prerequisitos.h"

class
  DocumentoPrototype {
public:
  DocumentoPrototype() = default;
  ~DocumentoPrototype() = default;


  virtual DocumentoPrototype* clonar() const = 0;
  virtual void config(const std::string& _contenido) = 0;
  virtual void Info() const = 0;
};