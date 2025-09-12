#pragma once
#include "Prerequisitos.h"
#include "Item.h"



class Inventary {
public:
	Inventary() = default;
	~Inventary() = default;

	void
		addItem(const std::string& name, int quiantity) {
		// Buscar si el item ya existe y sumarle la cantidad
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.add(quiantity);
				return;
			}
		}
		// Si no existe, agregar un nuevo item
		m_items.emplace_back(name, quiantity);
	}

	void
		showInventory() const {
		// verificar si el inventario esta vacio
		if (m_items.empty()) {
			std::cout << "El inventario esta vacio" << std::endl;
			return;
		}

		// Mostrar los items en el inventario
		std::cout << "Inventario:" << std::endl;
		for (const auto& item : m_items) {
			std::cout << "- " << item.getName() << ": " << item.getQuantity() << std::endl;
		}
	}

	void
		useItem(const std::string& name, int quantity) {
		for (auto& item : m_items) {
			if (item.getName() == name) {
				item.remove(quantity);
				// Si la cantidad del item es 0, eliminarlo del inventario
				if (item.getQuantity() == 0) {
					//m_items.erase(std::remove(m_items.begin(), m_items.end(), item), m_items.end());
				}
				std::cout << "Usaste " << quantity << " de " << name << std::endl;
				return;
			}
		}
		std::cout << "No tienes " << name << " en el inventario" << std::endl;
	}

private:
	std::vector<Item> m_items;
};