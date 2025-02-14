#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () : ClapTrap ("default_clap_name") , FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap Default Conestructor  is called" << std::endl;
	EnergyPoint = 50;
	HitPoint = 100;
	AttackDamage = 30;
	this->Name = "default";
}

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	Name = name;
	EnergyPoint = 50;
	HitPoint = 100;
	AttackDamage = 30;
	std::cout << "DiamondTrap paramater Conestructor  is called" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap& ob) : ClapTrap(ob) ,FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap copy Conestructor is called" << std::endl;
	this->Name = ob.getName();
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& ob) {
	std::cout << "copy assignment operator is called" << std::endl;
	ClapTrap::operator=(ob);
	this->Name = ob.getName();

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