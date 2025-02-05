#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : _fixedPointValue(val << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(const float fract) : _fixedPointValue((int)roundf(fract * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		std::cout << "Copy assignment operator called" << std::endl;
		_fixedPointValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	return _fixedPointValue;
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return (float)(_fixedPointValue) / (1 << _fractionalBits);
}

int		Fixed::toInt(void) const {
	return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& strm, const Fixed& ob) {
	strm << ob.toFloat();
	return strm;
}

