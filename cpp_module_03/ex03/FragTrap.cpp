#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap() {
	std::cout << "FragTrap Default Conestructor  is called" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
};

FragTrap::FragTrap (std::string name) : ClapTrap(name) {
	std::cout << "FragTrap paramater Conestructor  is called" << std::endl;
}

FragTrap::FragTrap (const FragTrap& ob) : ClapTrap(ob) {
	std::cout << "FragTrap copy Conestructor is called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& ob) {
	std::cout << "copy assignment operator is called" << std::endl;
	ClapTrap::operator=(ob);
	return *this;
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap Destruction is called " << std::endl;
}

void	FragTrap::highFivesGuys ( void ) {
	std::cout << "FivesGuys keeper mode." << std::endl;
}