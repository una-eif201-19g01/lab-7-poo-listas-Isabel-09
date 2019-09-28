#include "ListaEmpresa.h"
ListaEmpresa::ListaEmpresa() {
	primero = nullptr;
	actual = nullptr;
}

ListaEmpresa::~ListaEmpresa() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}

void ListaEmpresa::insertarInicio(const Empresa& _empresa) {
	actual = new Nodo(_empresa, nullptr);
	if (primero == nullptr) {
		primero = actual;
	}
	else {
		actual->setSiguiente(primero);
		primero = actual;
	}
}

void ListaEmpresa::insertarFinal(const Empresa& _empresa) {
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_empresa, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_empresa, nullptr));
	}
}

bool ListaEmpresa::eliminarInicio() {
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

int ListaEmpresa::totalNodos() {
	int totalNodos = 0;
	actual = primero;

	while (actual != nullptr) {
		totalNodos++;
		actual = actual->getSiguiente();
	}

	return totalNodos;
}

bool ListaEmpresa::listaVacia() {
	return primero == nullptr;
}

std::string ListaEmpresa::toString() {
	std::string resultado;
	actual = primero;

	while (actual != nullptr) {
		resultado += actual->toString();
		actual = actual->getSiguiente();
	}

	return resultado;
}

Nodo* ListaEmpresa::getPrimero() const {
	return primero;
}

void ListaEmpresa::setPrimero(Nodo* primero) {
	ListaEmpresa::primero = primero;
}

Nodo* ListaEmpresa::getActual() const {
	return actual;
}

void ListaEmpresa::setActual(Nodo* actual) {
	ListaEmpresa::actual = actual;
}