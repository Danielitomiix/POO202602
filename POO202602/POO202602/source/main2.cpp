#include "Prerequisitos.h"
#include "ProgramminPatterns/Composite/SistemaCarpeta.h"
#include "ProgramminPatterns/Composite/SistemaArchivo.h"



int main() {
  Sistema* archivo1 = new SistemaCarpeta();
  Sistema* archivo2 = new SistemaArchivo();

  SistemaCarpeta* carpeta1 = new SistemaCarpeta();
  SistemaCarpeta* carpeta2 = new SistemaCarpeta();

  carpeta1->agregarSistema(archivo1);
  carpeta1->agregarSistema(archivo2);

  carpeta2->agregarSistema(carpeta1);

  std::cout << " Sistema de archivos:" << std::endl;
  carpeta2->info();

  delete archivo1;
  delete archivo2;
  delete carpeta1;
  delete carpeta2;

    return 0;
}