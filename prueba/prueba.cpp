#include "prueba.hpp"

Sitio:: Sitio(void)
{
	std::cout << "Sitio Constructor\n";
	this->ocupado = false;
}

Sitio:: ~Sitio(void)
{
	std::cout << "Sitio Destructor\n";
}

Cluster:: Cluster(void)
{
	std::cout << "Default Constructor\n";
	size = 0;
	seat = NULL;
}

void Sitio:: set_bool(void)
{
	ocupado = true;
	std::cout << "ocupado " <<ocupado <<std::endl;
}

Cluster::Cluster(int size)
{
	std::cout << "OTHER Constructor\n";
	this->size = size;
	seat = new Sitio[size];
	seat[1].set_bool();
}

Cluster:: ~Cluster(void)
{
	std::cout << "Deleting cluster\n";
	this->printCluster();
	delete[] this->seat;
}


void Cluster::printCluster(void)
{
	std::cout << "size = " << this->size << "\n";
	/*std::cout << " = " << this->seat[1] << "\n";
	std::cout << " = " << this->seat[2] << "\n";
	std::cout << " = " << this->seat[3] << "\n";
	std::cout << " = " << this->seat[4] << "\n";
	std::cout << " = " << this->seat[5] << "\n";*/

}