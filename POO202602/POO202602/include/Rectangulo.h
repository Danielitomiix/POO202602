#pragma once
#include "Prerequisitos.h"

class Rectangulo {

public:
    Rectangulo(double ancho, double alto) : m_ancho(ancho), m_alto(alto) {}
    ~Rectangulo() = default;

    double getAncho() const {
        return m_ancho;
    }

    double
        getAlto() const {
        return m_alto;
    }

    void
        setAncho(double ancho) {
        m_ancho = ancho;
    }

    void
        setAlto(double alto) {
        m_alto = alto;
    }

    double calcularArea() const {
        return m_ancho * m_alto;
    }

    double calcularPerimetro() const {
        return 2 * (m_ancho + m_alto);
    }

private:
    double m_ancho;
    double m_alto;
};
