#include"Carro.h"
#include"ListaEmpresa.h"
#include "Moto.h"
#include"Empresa.h"
#include<iostream>
int main() {
	Carro carro(5, 100000);
	carro.setAnno(2018);
	carro.setMarca("Premium");
	carro.setModelo("sentra");
	Moto moto(15000);
	moto.setAnno(2020);
	moto.setMarca("Premium");
	moto.setModelo("500R");
	std::cout << "calcular precio Carro" << std::endl;
	std::cout << carro.CalcularCosto("Premium",7,10) << std::endl;
	std::cout << "calcular precio Carro" << std::endl;
	std::cout << moto.calcularCostoHora("Normal", 15);
	Empresa empresa("Buenos Vehiculos", carro, moto);
	ListaEmpresa* listaEmpresa = new ListaEmpresa();
	listaEmpresa->insertarInicio(empresa);
	std::cout << listaEmpresa->toString() << std::endl;
	
	
	
	return 0;
}