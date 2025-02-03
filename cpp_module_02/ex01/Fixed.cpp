#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) : _fixedPointValue(val << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(const float fract) : _fixedPointValue((int)(fract * (1 << _fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed &other) {
	if (this != &other) {  // prevent self-assignment
		std::cout << "Copy assignment operator called" << std::endl;
		_fixedPointValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
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


