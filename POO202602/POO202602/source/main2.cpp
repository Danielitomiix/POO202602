#include "Prerequisitos.h"
#include "ProgramminPatterns/MiSingleton.h"
#include "ProgramminPatterns/RegistroActividad.h"
#include "ProgramminPatterns/FactoryMethod.h"
#include "ProgramminPatterns/FactoryMethodVehiculos.h"



MiSingleton* MiSingleton::instancia = nullptr;
RegistroActividad* RegistroActividad::instancia = nullptr;


int main() {

  RegistroActividad* registro1 = RegistroActividad::getInstance();
  registro1->AgregarActividad("Inicio de sesion");
  registro1->AgregarActividad("abrio el menu");

  RegistroActividad* registro2 = RegistroActividad::getInstance();
  registro2->AgregarActividad("cerro sesion");

  registro2->MostrarActividades();


  MiSingleton* singleton = MiSingleton::getInstance();
  singleton->setData(42);

  std::cout << "Valor del singleton: " << singleton->getData() << std::endl;

  MiSingleton* singleton2 = MiSingleton::getInstance();
  std::cout << "Valor del singleton: " << singleton->getData() << std::endl;


  Fabrica* fabrica = new FabricaA(); //Fabrica Genera telsa(FabricaA)
  Producto* producto = fabrica->CrearProducto(); //Producto tesla(ProductoA)
  producto->Operacion();

  delete producto;
  delete fabrica;

  FactoriaVehiculos* fabricaVehiculos = new FactoriaCoches(); 
  Vehiculo* miVehiculo = fabricaVehiculos->crearVehiculo();
  miVehiculo->descripcion();

  delete miVehiculo;
  delete fabricaVehiculos;

  FactoriaVehiculos* fabricaBicis = new FactoriaBicicletas();
  Vehiculo* miBici = fabricaBicis->crearVehiculo();
  miBici->descripcion();

  delete miBici;
  delete fabricaBicis;



    return 0;
}