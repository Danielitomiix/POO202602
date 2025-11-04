#pragma once

class Pizza;

class
ConstrutorPizza {
public:
  ConstrutorPizza() = default;
  ~ConstrutorPizza() = default;

  virtual void
  buildIngredintes() = 0;

  virtual Pizza* 
  getPizza() = 0;
};