#pragma once
#include "Vehiculo.h"
class Moto:public Vehiculo
{
	float costoHora;
	public:
	Moto();
	Moto(float);
   ~Moto();
   float calcularCostoHora(std::string marca,int horas);
   float getCostoHora();
   void setCostoHora(float);
   std::string toString();

};

