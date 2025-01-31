#include "HumanB.hpp"

HumanB::HumanB (std::string arr) : name(arr) {}

HumanB::~HumanB () {
	std::cout << "Bweapon is over" << std::endl;
}

void	HumanB::attack (void) {
	if (Bweapon)
	std::cout << name << " attacks with their "<< Bweapon->getType() << std::endl;
}

void	HumanB::setWeapon (Weapon& B_weapon) {
	Bweapon = &B_weapon;
}