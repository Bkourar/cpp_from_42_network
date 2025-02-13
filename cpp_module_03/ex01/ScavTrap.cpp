#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap() {
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	std::cout << " Scavtrap Default Conestructor is called" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
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
    std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target ) {
	if (HitPoint == 0 || EnergyPoint == 0) {
		std::cout << "ScavTrap " << Name << " cannot attack, it's out of health or energy!" << std::endl;
		return ;
	}
    std::cout << "ScavTrap " << Name << " attacks " << target 
		<< ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoint--;
}
