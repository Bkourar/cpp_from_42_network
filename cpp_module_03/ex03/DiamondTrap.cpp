#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () : ClapTrap() {
	std::cout << "DiamondTrap Default Conestructor  is called" << std::endl;
};

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name) {
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

void	DiamondTrap::whoAmI ( void ) {
	std::cout << "clapTrap name " << this->getName() << " diamondTrap name " << Name << std::endl;
}
