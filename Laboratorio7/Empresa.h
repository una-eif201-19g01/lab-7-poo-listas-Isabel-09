#pragma once
#include"Carro.h"
#include "Moto.h"
class Empresa
{
	std::string nombre;
	Carro carro;
	Moto  moto;
public:
	Empresa();
	Empresa(std::string, Carro&, Moto&);
	~Empresa();
	std::string getNombre();
	void setNombre(std::string);
	Carro& getCarro();
	void setCarro(Carro&);
	Moto& getMoto();
	void setMoto(Moto&);
	std::string toString();
};

