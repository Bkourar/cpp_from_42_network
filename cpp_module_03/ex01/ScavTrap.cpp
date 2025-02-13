#include "ScavTrap.hpp"

ScavTrap::ScavTrap () {
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << " Scavtrap Default Conestructor is called" << std::endl;
}

ScavTrap::ScavTrap (std::string name) {
	this->Name = name;
	std::cout << "ScavTrap paramater Conestructor is called" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& ob) : ClapTrap(ob) {
	std::cout << "ScavTrap copy Conestructor  is called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ob) {
	std::cout << "ScavTrap copy assignment operator is called" << std::endl;
	ClapTrap::operator=(ob);
	return *this;
}

ScavTrap::~ScavTrap () {
	std::cout << "Scavtrap Destruction is called " << std::endl;
}

void	guardGate( void ) {
	std::cout << "Gate keeper mode." << std::endl;
}