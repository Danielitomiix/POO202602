#pragma once
#include "Prerequisitos.h"
#include "CuentaBancaria.h"

class
	UsuarioBancario {

public:
	UsuarioBancario(CuentaBancaria cuenta){
		m_nombreUsuario = m_cuenta.m_propietario;
		m_antiguedad.getFecha();
		m_cuenta = cuenta;
		m_cashBack = m_cuenta.consultarSaldo() * 0.01; // 1% de cashback por defecto
		m_uniquePoints = 5;
	}
	~UsuarioBancario() = default;
	
	CuentaBancaria&
		getCuenta() {
		return m_cuenta;
	}

private:
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	int m_idUsuario;
	Fecha  m_antiguedad;
	std::vector<int> m_historialTransacciones;
	int m_cashBack; // 1%  3% 5%
	int m_uniquePoints;
};
