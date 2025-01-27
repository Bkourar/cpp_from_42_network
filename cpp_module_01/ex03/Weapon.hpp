#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class   Weapon{
	public:
		const char	*getType();
		void		setType(const char *str);
		Weapon (const char *input);
		~Weapon ();
	private:
		const char  *message;
};


#endif