#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed(const int val) : _fixedPointValue(val << _fractionalBits) {}

Fixed::Fixed(const float fract) : _fixedPointValue((int)(std::roundf(fract * (1 << _fractionalBits)))) {}

Fixed::Fixed(const Fixed &other) : _fixedPointValue(other.getRawBits()) {}

Fixed& Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const { return _fixedPointValue; }

void Fixed::setRawBits(int const raw) { _fixedPointValue = raw; }

float Fixed::toFloat(void) const { return (float)(_fixedPointValue) / (1 << _fractionalBits); }

int Fixed::toInt(void) const { return _fixedPointValue >> _fractionalBits; }

bool Fixed::operator==(const Fixed& rhs) const { return _fixedPointValue == rhs._fixedPointValue; }

bool Fixed::operator!=(const Fixed& rhs) const { return _fixedPointValue != rhs._fixedPointValue; }

bool Fixed::operator<(const Fixed& rhs) const { return _fixedPointValue < rhs._fixedPointValue; }

bool Fixed::operator<=(const Fixed& rhs) const { return _fixedPointValue <= rhs._fixedPointValue; }

bool Fixed::operator>(const Fixed& rhs) const { return _fixedPointValue > rhs._fixedPointValue; }

bool Fixed::operator>=(const Fixed& rhs) const { return _fixedPointValue >= rhs._fixedPointValue; }

Fixed Fixed::operator+(const Fixed& rhs) const {
    return Fixed((float)(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    return Fixed((float)(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    return Fixed((float)(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    if (rhs.getRawBits() == 0) {
        // Handle division by zero
        return Fixed(0);
    }
    return Fixed((float)(this->toFloat() / rhs.toFloat()));
}

Fixed& Fixed::operator++() {
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    _fixedPointValue++;
    return temp;
}

Fixed& Fixed::operator--() {
    _fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    _fixedPointValue--;
    return temp;
}

Fixed& Fixed::min(Fixed& ob1, Fixed& ob2) {
    return (ob1 < ob2) ? ob1 : ob2;
}

const Fixed& Fixed::min(const Fixed& ob1, const Fixed& ob2) {
    return (ob1 < ob2) ? ob1 : ob2;
}

Fixed& Fixed::max(Fixed& ob1, Fixed& ob2) {
    return (ob1 > ob2) ? ob1 : ob2;
}

const Fixed& Fixed::max(const Fixed& ob1, const Fixed& ob2) {
    return (ob1 > ob2) ? ob1 : ob2;
}