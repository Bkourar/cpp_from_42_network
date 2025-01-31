#include "Weapon.hpp"

Weapon::Weapon (std::string input) : type(input) {}

Weapon::~Weapon () {
	std::cout<< "weapon is over" << std::endl;
}

std::string	Weapon::getType () {return type;}

void	Weapon::setType(std::string str) {
	type = str;
}
