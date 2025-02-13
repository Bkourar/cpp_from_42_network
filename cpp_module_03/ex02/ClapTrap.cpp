#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : HitPoint(10), EnergyPoint(10), AttackDamage(0) {
	std::cout << "Default Conestructor  is called" << std::endl;
};

ClapTrap::ClapTrap (std::string name) : Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
	std::cout << "paramater Conestructor  is called" << std::endl;
};

ClapTrap::ClapTrap (const ClapTrap& ob) {
	std::cout << "copy Conestructor  is called" << std::endl;
	*this = ob;
};

ClapTrap&	ClapTrap::operator=(const ClapTrap& ob) {
	std::cout << "copy assignment operator is called" << std::endl;
	if (this != &ob) {
		this->Name = ob.getName();
		this->EnergyPoint = ob.EnergyPoint;
		this->AttackDamage = ob.AttackDamage;
		this->HitPoint = ob.HitPoint;
	}
	return *this;
};

ClapTrap::~ClapTrap() {
	std::cout << "Default Destructor is called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (HitPoint == 0 || EnergyPoint == 0) {
		std::cout << "attack is called you don't have energy " << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << Name << " attacks " << target 
                  << ", causing " << AttackDamage << " points of damage!" << std::endl;
	
	EnergyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount) {	
	if (HitPoint == 0) {
		std::cout << "ClapTrap " << Name << " has no hit points left to take damage!" << std::endl;
		return ;
	}
	if (HitPoint >= amount)
		HitPoint -= amount;
	else
		HitPoint = 0;
	std::cout << "ClapTrap " << Name << " takes " << amount << " damage, " 
                    << HitPoint << " hit points left!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (EnergyPoint <= 0) {
		std::cout << "ClapTrap " << Name << " cannot repair itself, it's out of energy!" << std::endl;
		return ;
	}
	HitPoint += amount;
	EnergyPoint--;
    std::cout << "ClapTrap " << Name << " repairs itself for " << amount 
                  << " hit points, " << HitPoint << " hit points now!" << std::endl;
}

std::string	ClapTrap::getName ( void ) const {
	return (Name);
}

unsigned int	ClapTrap::getHitPoint ( void ) const {
	return (HitPoint);
}
unsigned int	ClapTrap::getEnergyPoint ( void ) const {
	return (EnergyPoint);
}

unsigned int	ClapTrap::getAttackDamage ( void ) const {
	return (AttackDamage);
}