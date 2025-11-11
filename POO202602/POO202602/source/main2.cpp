#include "Prerequisitos.h"
#include "ProgramminPatterns/Bridge/TV.h"
#include "ProgramminPatterns/Bridge/Radio.h"
#include "ProgramminPatterns/Bridge/ControlRemoto.h"


int main() {
  TV tv;
  Radio radio;

  ControlRemoto controlTV(&tv);
  ControlRemoto controlRadio(&radio);

  controlTV.encenderDispositivo();
  controlTV.apagarDispositivo();

  controlRadio.encenderDispositivo();
  controlRadio.apagarDispositivo();

    return 0;
}