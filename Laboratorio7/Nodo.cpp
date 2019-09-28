
#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Empresa& empresa, Nodo* siguiente) : empresa(empresa), siguiente(siguiente) {}

Nodo::~Nodo() {

}

const Empresa& Nodo::getEmpresa() const {
	return empresa;
}

void Nodo::setEmpresa(const Empresa& empresa) {
	this->empresa = empresa;
}

Nodo* Nodo::getSiguiente() const {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	Nodo::siguiente = _siguiente;
}

std::string Nodo::toString() {
	return empresa.toString();
}