#pragma once
#include "Prerequisitos.h"

class Estudiantes
{
	public:
		Estudiantes() = default;
		~Estudiantes() = default;

        void 
         setEstudiantes(const std::string& nombre, int edad) {
            m_nombre = nombre;
            m_edad = edad;
        }

        void 
         informacion() const {
            std::cout << "Nombre: " << m_nombre << ", Edad: " << m_edad << std::endl;
        }

private:
    std::string m_nombre;
    int m_edad;
};
