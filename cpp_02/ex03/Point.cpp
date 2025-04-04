
#include "Point.hpp"

Fixed Point::get_y(void) const
{
	return (this->y);
}

Fixed Point::get_x(void) const
{
	return (this->x);
}

/*Como before es un const, para que ese pueda encontrar las funciones,
las funciones también tienen que ser const, si no no lo las encuentra
porque piensa que vas a modificar su valor y etonces por eso no te deja
No se puede acceder tampoco directamente porque al ser pirvados se tiene
que acceder a través de una función por proteccion, abstracción y flexibilidad*/
Point& Point::operator=(const Point& before)
{
//	std::cout << "Copy Point assigment operator called" << std::endl;
	(Fixed)this->x = before.get_x();
	(Fixed)this->y = before.get_y();
	return (*this);
}

Point::Point(const Point& before) : x(before.x), y(before.y)
{
//	std::cout << "Copy Point constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
//	std::cout << "Point constructor" << std::endl;
}


Point::Point(void) : x(0), y(0)
{
//	std::cout << "Default Point Constructor" << std::endl;
}

Point::~Point()
{
//	std::cout << "Point Destructor" << std::endl;
}
