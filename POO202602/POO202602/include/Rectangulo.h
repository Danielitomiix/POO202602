#pragma once
#include "Prerequisitos.h"

class Rectangulo 
{
public:
    Rectangulo(double ancho, double alto) : m_ancho(ancho), m_alto(alto) {};
    ~Rectangulo() = default;

    double Area() const {
        return m_ancho * m_alto;
	}

    double 
     Perimetro() const {
        return 2 * (m_ancho + m_alto);
    }

    double 
     getAncho() const {
        return m_ancho;
    }

    double
     getAlto() const {
        return m_alto;
    }

private:
    double m_ancho;
    double m_alto;
};
