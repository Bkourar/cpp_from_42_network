#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class Point {
	public :
		Point();
		Point(const float i, const float j);
		Point(const Point&);
		Point& operator=(const Point&);
		~Point();
		float	getX(void) const;
		float	getY(void) const;
	private:
		const Fixed	x;
		const Fixed	y;
};

float	absolute(float n);

#endif