#pragma once
#include "Prerequisitos.h"

class
Prototype {
public:
  Prototype() = default;
  ~Prototype() = default;

  virtual Prototype* clone() const = 0;
  virtual void config(const std::string _value) = 0;
  virtual void Info() const = 0;
};