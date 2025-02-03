#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float fract);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		~Fixed();
		static Fixed& min(Fixed& ob1, Fixed& ob2);
		static const Fixed& min(const Fixed& ob1, const Fixed& ob2);
		static Fixed& max(Fixed& ob1, Fixed& ob2);
		static const Fixed& max(const Fixed& ob1, const Fixed& ob2);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator==(const Fixed& rhs) const;
		bool operator<(const Fixed& rhs) const;
		bool operator>(const Fixed& rhs) const;
		bool operator!=(const Fixed& rhs) const;
		bool operator<=(const Fixed& rhs) const;
		bool operator>=(const Fixed& rhs) const;
		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;
};

std::ostream& operator<<(std::ostream& strm, const Fixed& ob);

#endif