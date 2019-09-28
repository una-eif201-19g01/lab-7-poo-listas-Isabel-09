#include "Vehiculo.h"
#include <sstream>
Vehiculo::Vehiculo(){}
Vehiculo::Vehiculo(std::string modelo, std::string marca, int anno) :modelo(modelo), marca(marca), anno(anno) {

}
Vehiculo::~Vehiculo(){}

std::string Vehiculo::getModelo() {
	return modelo;
}
void Vehiculo::setModelo(std::string modelo) {
	this->modelo = modelo;
}
std::string Vehiculo::getMarca() {
	return marca;
}
void Vehiculo::setMarca(std::string marca) {
	this->marca = marca;
}
int Vehiculo::getAnno() {
	return anno;
}
void Vehiculo::setAnno(int anno) {
	this->anno = anno;
}
std::string Vehiculo::toString() {
	std::stringstream s;
	s << "El modelo del vehiculo es:" << getModelo() << std::endl;
	s << " La marca del Vehiculo es:" << getMarca() << std::endl;
	s << "El anno del Vehiculo es : " << getAnno() << std::endl;
	return s.str();
}