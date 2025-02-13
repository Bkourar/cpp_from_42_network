#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap() {
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
	std::cout << " Scavtrap Default Conestructor is called" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
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

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target ) {
	if (HitPoint == 0 || EnergyPoint == 0) {
		std::cout << "attack is called you don't have energy " << std::endl;
		return ;
	}
	std::cout << "ScavTrap attack on " << target << " causing " << AttackDamage << " points of damage!"<< std::endl;
	EnergyPoint--;
}	
