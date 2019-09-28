#include "Empresa.h"
#include <sstream>
Empresa::Empresa(){}

Empresa::Empresa(std::string nombre, Carro& carro, Moto& moto) :nombre(nombre), carro(carro), moto(moto) {

}
Empresa::~Empresa(){}

std::string Empresa::getNombre() {
	return nombre;
}
void Empresa::setNombre(std::string nombre) {
	this->nombre = nombre;
}
Carro& Empresa::getCarro() {
	return carro;
}
void Empresa::setCarro(Carro& _carro) {
	this-> carro= _carro;
}
Moto& Empresa::getMoto() {
	return moto;
}
void Empresa::setMoto(Moto&_moto) {
	this->moto = _moto;
}
std::string Empresa::toString() {
	std::stringstream s;
	s << "El nombre de la empresa es" << getNombre()<<std::endl;
	s << getCarro().toString() << std::endl;
	s << getMoto().toString() << std::endl;
	return s.str();
}