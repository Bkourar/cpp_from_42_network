#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () {
	std::cout << "DiamondTrap Default Conestructor  is called" << std::endl;
};

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name + "_clap_name"){
	Name = name;
	std::cout << "DiamondTrap paramater Conestructor  is called" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap& ob) : ClapTrap(ob) {
	std::cout << "DiamondTrap copy Conestructor is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& ob) {
	std::cout << "copy assignment operator is called" << std::endl;
	ClapTrap::operator=(ob);
	return *this;
}

DiamondTrap::~DiamondTrap () {
	std::cout << "DiamondTrap Destruction is called " << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return this->Name;
}

void	DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name : " << getName() << std::endl;
    std::cout << "ClapTrap name : " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
        ScavTrap::attack(target);
}