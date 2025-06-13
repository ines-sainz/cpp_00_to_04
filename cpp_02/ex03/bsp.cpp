
#include "Point.hpp"
#include "Fixed.hpp"

/**
 * @brief Calculates the area of the triangle formed by three points.
 * 
 * Uses the shoelace formula to compute the absolute value of the signed
 * area of the triangle defined by points a, b, and c.
 * 
 * @param a First point of the triangle.
 * @param b Second point of the triangle.
 * @param c Third point of the triangle.
 * @return float Area of the triangle.
 */
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

/**
 * @brief Determines if a point lies inside a triangle.
 * 
 * Compares the area of triangle ABC with the sum of the areas of triangles
 * formed with the point and each triangle side. If equal and none are zero,
 * the point lies strictly inside the triangle.
 * 
 * @param a First vertex of the triangle.
 * @param b Second vertex of the triangle.
 * @param c Third vertex of the triangle.
 * @param point Point to test.
 * @return true If point lies inside the triangle (not on an edge).
 * @return false If point lies outside or on the triangle.
 */
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
