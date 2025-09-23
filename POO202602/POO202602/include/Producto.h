#pragma once
#include "Prerequisitos.h"

class Producto {

	public:
		//constructor
		Producto(const std:: string& nombre,
			int codigo,
			categoriaProducto  categoria,
			const std::string& descripcion,
			TipoProducto tipo,
			int caducidad,
			double peso,
			double costo,
			const std::string m_contenido,
		    const std::string m_marca,
		    const std::string m_modelo) :

			m_nombre(nombre),
			m_codigo(codigo),
			m_categoria(categoria),
			m_descripcion(descripcion),
			m_tipo(tipo),
			m_caducidad(caducidad),
			m_peso(peso),
			m_costo(costo),
			m_contenido(m_contenido),
			m_marca(m_marca),
			m_modelo(m_modelo) {}
		     
			//Destructor por defecto
			~Producto() = default;

			void
			mostrarProducto() const {
				std::cout << "Nombre: " << m_nombre << std::endl;
				std::cout << "Codigo: " << m_codigo << std::endl;
				std::cout << "Categoria: " << m_categoria << std::endl;
				std::cout << "Descripcion: " << m_descripcion << std::endl;
				std::cout << "Tipo: " << m_tipo << std::endl;
				std::cout << "Caducidad: " << m_caducidad << " dias" << std::endl;
				std::cout << "Peso: " << m_peso << " kg" << std::endl;
				std::cout << "Costo: $" << m_costo << std::endl;
				std::cout << "Contenido: " << m_contenido << std::endl;
				std::cout << "Marca: " << m_marca << std::endl;
				std::cout << "Modelo: " << m_modelo << std::endl;
			}


			std::string getNombre () const {
				return m_nombre;
			}

			int getCodigo() const {
				return m_codigo;
			}

			categoriaProducto getCategoria() const {
				return m_categoria;
			}

			std::string getDescripcion() const {
				return m_descripcion;
			}

			TipoProducto getTipo() const {
				return m_tipo;
			}

			int getCaducidad() const {
				return m_caducidad;
			}

			double getPeso() const {
				return m_peso;
			}

			double getCosto() const {
				return m_costo;
			}

			std::string getContenido() const {
				return m_contenido;
			}

			std::string getMarca() const {
				return m_marca;
			}

			std::string getModelo() const {
				return m_modelo;
			}


			void
			setNombre(const std::string& nombre) {
				m_nombre = nombre;
			}

			void
				setCodigo(int codigo) {
				m_codigo = codigo;
			}

			void
				setCategoria(categoriaProducto categoria) {
				m_categoria = categoria;
			}

			void
				setDescripcion(const std::string& descripcion) {
				m_descripcion = descripcion;
			}

			void
				setTipo(TipoProducto tipo) {
				m_tipo = tipo;
			}

			void
				setCaducidad(int caducidad) {
				m_caducidad = caducidad;
			}

			void
				setPeso(double peso) {
				m_peso = peso;
			}

			void
				setCosto(double costo) {
				m_costo = costo;
			}

			void
				setContenido(const std::string& contenido) {
				m_contenido = contenido;
			}

			void
				setMarca(const std::string& marca) {
				m_marca = marca;
			}

			void
				setModelo(const std::string& modelo) {
				m_modelo = modelo;
			}

private:
		std::string m_nombre;
		int m_codigo;
		categoriaProducto m_categoria;
		std::string m_descripcion;
		TipoProducto m_tipo;
		int m_caducidad;
		double m_peso;
		double m_costo;
		std::string m_contenido;
		std::string m_marca;
		std::string m_modelo;

};