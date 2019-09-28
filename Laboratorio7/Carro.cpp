#include "Carro.h"
#include <sstream>
Carro::Carro() {}
Carro::Carro(int cantAsientos, float costoDia) :cantAsientos(cantAsientos), costoDia(costoDia) {

}
Carro::~Carro(){}
float Carro::CalcularCosto(std::string marca, int cantidad, int dias) {
	float costo = costoDia;
	if (marca == "Premium" && cantidad > 5) {
		costo += (costo * 0, 1);
		costo = (costo * dias);
	}
	else 
		if (marca == "Premium" && cantidad <= 5){
			costo += (costo * 0, 05);
		costo = (costo * dias);

	}
		else 
		if (cantidad > 5 && marca == "Estandar") {
			costo += (costo * 0, 03);
		costo = (costo * dias);

		}
		else {
		costo *= dias;
		}

		return costo;
	}

	int Carro::getCantAsientos() {
		return cantAsientos;
	}
	void Carro::setCantAsientos(int cantAsientos) {
		this->cantAsientos = cantAsientos;
	}
	float Carro::getCostoDia() {
		return costoDia;
	}
	void Carro::setCostoDia(float costoDia) {
		this->costoDia = costoDia;
	}
	std::string Carro::toString() {
		std::stringstream s;
		s << "La cantidad de Asientos del Carro es :" << getCantAsientos() << std::endl;
		s << "El costo por dia del carro es  : " << getCostoDia() << std::endl;
		return s.str();
	}