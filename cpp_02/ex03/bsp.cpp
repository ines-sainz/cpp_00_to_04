
#include "Point.hpp"
#include "Fixed.hpp"

float	getArea(Point const a, Point const b, Point const c)
{
    Fixed	area;
    Fixed	a1;
    Fixed	b1;
    Fixed	c1;

    a1 = (a.get_x() * (b.get_y() - c.get_y()));
    b1 = b.get_x() * (c.get_y() - a.get_y());
	c1 = c.get_x() * (a.get_y() - b.get_y());
	area = (a1 + b1 + c1);
	if (area < 0)
		area = area * (-1);
	area = area / 2;
	float areaN = area.toFloat();
	return (areaN);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
    float	areaABC;
	float	areaPBC;
	float	areaAPC;
	float	areaABP;
	float	p;

    areaABC = getArea(a, b, c);
	areaPBC = getArea(point, b, c);
	areaAPC = getArea(a, point, c);
	areaABP = getArea(a, b, point);

	p = areaPBC + areaAPC + areaABP;
	if (p > areaABC)
		return (false); /*p está fuera*/
	if (roundf(areaPBC) == 0 || roundf(areaAPC) == 0 || roundf(areaABP) == 0)
		return (false); /*p está en un borde*/
	return (true);
}