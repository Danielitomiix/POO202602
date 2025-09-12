#pragma once

// STD Librerias
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

struct Fecha {
    int dia;
    int mes;
    int anio;

    void 
        getFecha() {
		// Obtener la fecha actual del sistema
        time_t t = time(0);
        tm* now = localtime(&t);

		//creamos la instancia de Fecha
        Fecha hoy;
        hoy.dia = now->tm_mday;
        hoy.mes = now->tm_mon + 1; // Los meses van de 0 a 11
        hoy.anio = now->tm_year + 1900; // El anio desde 1900


		//usamos la funcion de la estructura
		std::cout << "Fecha actual: " << hoy.toString() << std::endl;
       }

    std::string toString() const {
		return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
    }
};