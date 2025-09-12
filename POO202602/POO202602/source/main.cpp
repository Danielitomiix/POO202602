#include "Prerequisitos.h"
#include "Inventary.h"
#include "Item.h"
#include "Rectangulo.h"


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
	std::cout << "Area: " << rect.calcularArea() << std::endl;
	std::cout << "Perimetro: " << rect.calcularPerimetro() << std::endl;


	std::cout << "Hello World!" << std::endl;
	std::cin.get();
	return 0;
}