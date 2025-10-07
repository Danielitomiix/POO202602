#pragma once
#include "Prerequisitos.h"

class RegistroActividad {
private:
  // Constructor privado para evitar instanciacion externa
  RegistroActividad() = default;
  ~RegistroActividad() = default;


public:
    // Metodo estático para obtener la unica instancia de la clase
    static RegistroActividad* getInstance() {
        if (instancia == nullptr) {
            instancia = new RegistroActividad();
        }
        return instancia;
    }
    // Metodo para registrar una actividad
    void 
    AgregarActividad(const std::string& actividad) {
        actividades.push_back(actividad);
    }
    // Método para mostrar todas las actividades registradas
    void 
    MostrarActividades() const {
        std::cout << "Actividades registradas:" << std::endl;
        for (const auto& actividad : actividades) {
            std::cout << "- " << actividad << std::endl;
        }
    };

private: 
    // Puntero estatico a la unica instancia de la clase
    static RegistroActividad* instancia;
    std::vector<std::string> actividades;
};