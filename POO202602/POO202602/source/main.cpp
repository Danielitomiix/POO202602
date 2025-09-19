#include "Prerequisitos.h"
#include "Inventary.h"
#include "Item.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Estudiantes.h"
#include "Banco.h"
#include "UsuarioBancario.h"


class
	Character {
public:
	Character() = default;

		Character(int healt) : m_healt(healt) {}

	void
		rebirth() {
		if (!isCharacterAlive && m_healt <= 0) {
			std::cout << "Character is alive" << std::endl;
			isCharacterAlive = true;
		}
	}

	int
		getHealt() const {
		return m_healt;
	}

	void
		setHealt(int healt) {
		m_healt = healt;
	}

private:
	int m_healt;
	bool isCharacterAlive = false;

};


int
main() {
	Inventary inventary;
	inventary.addItem("Potion", 5);
	inventary.addItem("Elixir", 3);
	inventary.addItem("Diamante", 2);

	inventary.useItem("Potion", 2);
	inventary.showInventory();


	Rectangulo rect(10.0, 5.0);
	std::cout << "Rectangulo - Ancho: " << rect.getAncho() << ", Alto: " << rect.getAlto() << std::endl;
	std::cout << "Area: " << rect.Area() << std::endl;
	std::cout << "Perimetro: " << rect.Perimetro() << std::endl;

	Fecha fecha;
	fecha.getFecha();

	Circulo miCirculo;
	miCirculo.radio = 7.0;

	double area = miCirculo.calcularArea();

	std::cout << "El area del circulo es: " << area << std::endl;

	Estudiantes miEstudiante[5];
	std::cout << "----- Estudiantes -----" << std::endl;

	miEstudiante[0].setEstudiantes("Eduardo", 23);
	miEstudiante[1].setEstudiantes("Kevin", 20);
	miEstudiante[2].setEstudiantes("Jose", 21);
	miEstudiante[3].setEstudiantes("Misael", 22);
	miEstudiante[4].setEstudiantes("Miguel", 19);

	for (int i = 0; i < 5; i++) {
		miEstudiante[i].informacion();
	}

	Banco Santander;
	UsuarioBancario Roberto = Santander.nuevoUsuario(CuentaBancaria("Roberto", 1222, 1500.0));
	UsuarioBancario Carlos = Santander.nuevoUsuario(CuentaBancaria("Carlos", 3444, 800.0));

	//Banco cuenta1("Eduardo", 123456, 1000.0);
	//Banco cuenta2("Kevin", 654321, 500.0);

	std::cout << "----- Saldos iniciales -----" << std::endl;
	//cuenta1.consultarSaldo();
	//cuenta2.consultarSaldo();

	std::cout << "----- Realizando la transferencia: -----" << std::endl;
	Santander.realizarTransferencia(Carlos, Roberto, 200.0, 1709);

	std::cout << "----- Saldos despues de la transferencia -----" << std::endl;
	//cuenta1.consultarSaldo();
	//cuenta2.consultarSaldo();


	std::cin.get();
	return 0;
}
