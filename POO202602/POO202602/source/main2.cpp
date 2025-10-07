#include "Prerequisitos.h"
#include "ProgramminPatterns/MiSingleton.h"
#include "ProgramminPatterns/RegistroActividad.h"

MiSingleton* MiSingleton::instancia = nullptr;
RegistroActividad* RegistroActividad::instancia = nullptr;


int main() {

  RegistroActividad* registro1 = RegistroActividad::getInstance();
  registro1->AgregarActividad("Inicio de sesion");
  registro1->AgregarActividad("abrio el menu");
  registro1->MostrarActividades();


   
  MiSingleton* singleton = MiSingleton::getInstance();
  singleton->setData(42);

  std::cout << "Valor del singleton: " << singleton->getData() << std::endl;

  MiSingleton* singleton2 = MiSingleton::getInstance();
  std::cout << "Valor del singleton: " << singleton->getData() << std::endl;


    return 0;
}