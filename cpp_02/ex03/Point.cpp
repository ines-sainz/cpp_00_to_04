
#include "Point.hpp"

/**
 * @brief Gets the y-coordinate (Fixed) of the Point.
 * 
 * @return Fixed Y value.
 */
Fixed Point::get_y(void) const
{
	return (this->y);
}

/**
 * @brief Gets the x-coordinate (Fixed) of the Point.
 * 
 * @return Fixed X value.
 */
Fixed Point::get_x(void) const
{
	return (this->x);
}

/**
 * @brief Copy assignment operator for Point.
 * 
 * As before is const and the parameters are private you have to access
 * with a function and they have to be const.
 * 
 * @param before Point to assign from.
 * @return Point& Reference to the assigned Point.
 */
Point& Point::operator=(const Point& before)
{
//	std::cout << "Copy Point assigment operator called" << std::endl;
	(Fixed)this->x = before.get_x();
	(Fixed)this->y = before.get_y();
	return (*this);
}

/**
 * @brief Copy constructor for Point.
 * 
 * @param before Point to copy.
 */
Point::Point(const Point& before) : x(before.x), y(before.y)
{
//	std::cout << "Copy Point constructor called" << std::endl;
}

/**
 * @brief Constructs a Point from float x and y values.
 * 
 * @param x Float value for x-coordinate.
 * @param y Float value for y-coordinate.
 */
Point::Point(const float x, const float y) : x(x), y(y)
{
//	std::cout << "Point constructor" << std::endl;
}

/**
 * @brief Default constructor. Initializes x and y to 0.
 */
Point::Point(void) : x(0), y(0)
{
//	std::cout << "Default Point Constructor" << std::endl;
}

/**
 * @brief Destructor for Point.
 */
Point::~Point()
{
//	std::cout << "Point Destructor" << std::endl;
}
