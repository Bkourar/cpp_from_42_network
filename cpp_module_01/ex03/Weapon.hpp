#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon {
	public:
		Weapon (std::string input);
		~Weapon ();
		std::string	getType();
		void		setType(std::string str);
	private:
		std::string	type;
};


#endif