#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float fract);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const ;
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;
};

std::ostream& operator<<(std::ostream& strm, const Fixed& ob);

#endif