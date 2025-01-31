#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
	public:
		HumanB (std::string arr);
		~HumanB ();
		void	attack();
		void	setWeapon(Weapon&);
	private:
		Weapon		*Bweapon;
		std::string	name;
};

#endif