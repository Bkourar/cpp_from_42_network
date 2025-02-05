#include "Point.hpp"

Point::Point(): x(0), y(0) {};

Point::Point(const float i, const float j): x(i), y(j) {};

Point::Point(const Point& other) : x(other.x), y(other.y) {
}

Point& Point::operator=(const Point& ob) {
	(void)ob;
	return (*this);
}

Point::~Point() {};

float Point::getX(void) const {
	return x.toFloat();
}

float Point::getY(void) const {
	return y.toFloat();
}

float absolute(float n) {
	if (n < 0) {
		return -n;
	}
	return n;
}

