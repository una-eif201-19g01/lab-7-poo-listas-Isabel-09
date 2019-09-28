#pragma once
#include "Vehiculo.h"
class Carro:public Vehiculo
{   
	int cantAsientos;
	float costoDia;
public:
	Carro();
	Carro(int, float);
	~Carro();
	float CalcularCosto(std::string marca,int cantidad,int dias);
	int getCantAsientos();
	void setCantAsientos(int);
	float getCostoDia();
	void setCostoDia(float);
	std::string toString();
};

