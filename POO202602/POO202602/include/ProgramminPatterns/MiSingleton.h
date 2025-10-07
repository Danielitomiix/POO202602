#pragma once
#include "Prerequisitos.h"

class MiSingleton {
private:
  // Constructor privado para evitar instanciación externa
  MiSingleton() : data (0) {}
  ~MiSingleton() = default;


public:
  // Método estático para obtener la única instancia de la clase
  static MiSingleton* getInstance() {
    if (instancia == nullptr) {
      instancia = new MiSingleton();
    }
    return instancia;
  }
  // Métodos para manipular los datos del singleton
  void setData(int valor) {
    data = valor;
  }
  int getData() const {
    return data;
  }

private:
  // Puntero estático a la única instancia de la clase
  static MiSingleton* instancia;
  int data;
};