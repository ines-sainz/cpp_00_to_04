
#pragma once
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Fixed get_y(void) const ;
		Fixed get_x(void) const;
		Point& operator=(const Point& before);
		Point(const Point& before);
		Point(const float x, const float y);
		Point(void);
		~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
float	getArea(Point const a, Point const b, Point const c);
