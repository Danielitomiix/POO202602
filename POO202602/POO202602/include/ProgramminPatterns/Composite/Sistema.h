#pragma once
#include "Prerequisitos.h"

class
Sistema {
public:
  Sistema() = default;
  virtual ~Sistema() = default;

  virtual void info() = 0;
};