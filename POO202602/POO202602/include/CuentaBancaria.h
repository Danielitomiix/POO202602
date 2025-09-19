#pragma once
#include "Prerequisitos.h"

class 
CuentaBancaria {

public:
	CuentaBancaria() = default;
	CuentaBancaria (std:: string propietario, int numCuenta, double saldoInicial) :
	m_propietario(propietario), m_numeroCuenta(numCuenta), m_saldo(saldoInicial) { }
	~CuentaBancaria() = default;

	double&
	consultarSaldo() {
		std::cout << "El saldo actual de " << m_propietario 
			<< " (cuenta  " << m_numeroCuenta << " ): " << m_saldo << std::endl;
		return m_saldo;
	}

	void
	mostrarInteresCalculado(){
		double tasaInteres = 3.5; // Tasa de interés fija del 3.5%
		double interes = CalcularInteres(tasaInteres);
		std::cout << "El interés calculado para la cuenta de " << m_propietario 
			<< " (cuenta " << m_numeroCuenta << ") al " << tasaInteres 
			<< "% es: " << interes << std::endl;
	}

	int
	getNumeroCuenta () const {
		return m_numeroCuenta;
	}

private:
	double 
	CalcularInteres(double tasaInteres) {
		return m_saldo * tasaInteres / 100.0;
	}

protected:
	//Transferir dinero a otra cuenta
	void
	Transferir(CuentaBancaria& cuentaOrigen, CuentaBancaria& cuentaDestino, double monto, int noRef) {
		if (monto > 0 && monto <= cuentaOrigen.m_saldo) {
			cuentaOrigen.m_saldo -= monto;
			cuentaDestino.m_saldo += monto;
			std::cout << "Transferencia de " << monto << " de la cuenta " 
				<< cuentaOrigen.m_numeroCuenta << " a la cuenta " << cuentaDestino.m_numeroCuenta 
				<< " realizada con exito." << " Numero de referencia " << noRef << std::endl;
		} else {
			std::cout << "Error en la transferencia: saldo insuficiente o monto inválido." << std::endl;
		}
	}

public:
std::string m_propietario;

private:
double m_saldo;

protected:
int m_numeroCuenta;

};