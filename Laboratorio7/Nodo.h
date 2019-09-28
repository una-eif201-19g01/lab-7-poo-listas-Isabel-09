#include "Empresa.h"
class Nodo
{
	Empresa empresa;
	Nodo * siguiente;
public:
	Nodo();

	Nodo(const Empresa &empresa, Nodo* siguiente);

	virtual ~Nodo();

	const Empresa& getEmpresa() const;

	void setEmpresa(const Empresa& empresa);

	Nodo* getSiguiente() const;

	void setSiguiente(Nodo* _siguiente);

	std::string toString();

};

