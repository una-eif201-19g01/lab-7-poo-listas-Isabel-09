#include "Nodo.h"
class ListaEmpresa
{
	Nodo* primero;
	Nodo* actual;

public:
	ListaEmpresa();

	virtual ~ListaEmpresa();

	void insertarInicio(const Empresa& empresa);
	void insertarFinal(const Empresa&  empresa);
	bool eliminarInicio();
	bool eliminarfinal();
	int totalNodos();
	bool listaVacia();

	Nodo* getPrimero() const;

	void setPrimero(Nodo* primero);

	Nodo* getActual() const;

	void setActual(Nodo* actual);

	std::string toString();


};

