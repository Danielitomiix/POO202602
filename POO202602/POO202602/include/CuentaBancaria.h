#pragma once
#include "Prerequisitos.h"

// Clase que representa una cuenta bancaria
// Permite ver el saldo, calcular intereses y hacer transferencias entre cuentas
class CuentaBancaria {

public:
    // Constructor por defecto
    CuentaBancaria() = default;

    // Constructor que recibe el nombre del propietario, numero de cuenta y saldo inicial
    CuentaBancaria(std::string propietario, int numCuenta, double saldoInicial) :
        m_propietario(propietario), m_numeroCuenta(numCuenta), m_saldo(saldoInicial) {
    }

    // Destructor por defecto
    ~CuentaBancaria() = default;

    // Funcion para consultar el saldo actual
    // Muestra el saldo en pantalla y tambi√©n lo devuelve
    double& 
    consultarSaldo() {
        std::cout << "El saldo actual de " << m_propietario
            << " (cuenta " << m_numeroCuenta << "): " << m_saldo << std::endl;
        return m_saldo;
    }

    // Funcion que calcula el interes usando una tasa fija (3.5%)
    // Solo muestra el resultado en pantalla
    void 
	mostrarInteresCalculado(){
		double tasaInteres = 3.5; // Tasa de interÈs fija del 3.5%
        double interes = CalcularInteres(tasaInteres);
        std::cout << "El interÈs calculado para la cuenta de " << m_propietario
            << " (cuenta " << m_numeroCuenta << ") al " << tasaInteres
            << "% es: " << interes << std::endl;
    }

    // Funcion que devuelve el numero de la cuenta
    int 
    getNumeroCuenta() const {
        return m_numeroCuenta;
    }

private:
    // Funcion que calcula el interes segun la tasa que le pases
    double 
    CalcularInteres(double tasaInteres) {
        return m_saldo * tasaInteres / 100.0;
    }

protected:
    // Funcion para transferir dinero entre cuentas
    // Recibe la cuenta de origen, destino, monto y numero de referencia
    // Valida que haya suficiente dinero antes de transferir
    void 
    Transferir(CuentaBancaria& cuentaOrigen, CuentaBancaria& cuentaDestino, double monto, int noRef) {
        if (monto > 0 && monto <= cuentaOrigen.m_saldo) {
            cuentaOrigen.m_saldo -= monto;
            cuentaDestino.m_saldo += monto;
            std::cout << "Transferencia de " << monto << " de la cuenta "
                << cuentaOrigen.m_numeroCuenta << " a la cuenta " << cuentaDestino.m_numeroCuenta
				<< " realizada con exito." << " Numero de referencia " << noRef << std::endl;
		} else {
			std::cout << "Error en la transferencia: saldo insuficiente o monto inv·lido." << std::endl;
        }
    }

public:
    std::string m_propietario; // Nombre del due√±o de la cuenta

private:
    double m_saldo; // Saldo actual de la cuenta

protected:
    int m_numeroCuenta; // Nmero de la cuenta

};
