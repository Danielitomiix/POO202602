#pragma once
#include "Prerequisitos.h"

class MiSingleton {
private:
  // Constructor privado para evitar instanciaci�n externa
  MiSingleton() : data (0) {}
  ~MiSingleton() = default;


public:
  // M�todo est�tico para obtener la �nica instancia de la clase
  static MiSingleton* getInstance() {
    if (instancia == nullptr) {
      instancia = new MiSingleton();
    }
    return instancia;
  }
  // M�todos para manipular los datos del singleton
  void setData(int valor) {
    data = valor;
  }
  int getData() const {
    return data;
  }

private:
  // Puntero est�tico a la �nica instancia de la clase
  static MiSingleton* instancia;
  int data;
};