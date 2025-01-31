#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
	public:
		HumanA (std::string arr, Weapon &type_clube);
		~HumanA ();
		void	attack();
	private:
		Weapon&		Aweapon;
		std::string	name;
};

#endif