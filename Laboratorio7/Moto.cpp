#include "Moto.h"
#include <sstream>
Moto::Moto() {}
Moto::Moto(float costoHora) :costoHora(costoHora) {

}
Moto::~Moto() {

}
float Moto::getCostoHora() {
	return costoHora;
}
void Moto::setCostoHora(float costoHora) {
	this->costoHora = costoHora;
}
float Moto::calcularCostoHora(std::string marca,int horas) {
	float costo = costoHora;
	if (marca == "Premium") {
		costo += (costo * 0.05);
		costo = costo * horas;
	}
	return costo*horas;
}
std::string Moto::toString() {
	std::stringstream s;
	s << "El costo por hora Es :" << getCostoHora() << std::endl;
}