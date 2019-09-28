
#include<string>
class Vehiculo
{
	std::string modelo;
	std::string marca;
	int anno;
public:
	Vehiculo();
	Vehiculo(std::string, std::string, int);
	~Vehiculo();
	std::string toString();
	std::string getModelo();
	void setModelo(std::string);
	std::string getMarca();
	void setMarca(std::string);
	int getAnno();
	void setAnno(int);
};

