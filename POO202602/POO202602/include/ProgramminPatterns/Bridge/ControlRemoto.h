#pragma once
#include "Dispositivo.h"

class
ControlRemoto {
public:
  ControlRemoto(Dispositivo* disp) : dispositivo(disp) {}
  ~ControlRemoto() = default;

  virtual void encenderDispositivo() {
    dispositivo->encenderDispositivo();
  }
  virtual void apagarDispositivo() {
    dispositivo->apagarDispositivo();
  }
protected:
  Dispositivo* dispositivo;
};