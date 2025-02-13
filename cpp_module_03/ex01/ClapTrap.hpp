#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		virtual	~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string		getName ( void ) const; 
		unsigned int	getHitPoint ( void ) const;
		unsigned int	getEnergyPoint ( void ) const;
		unsigned int	getAttackDamage ( void ) const;
	protected:
		std::string		Name;
		unsigned int	HitPoint;
		unsigned int	EnergyPoint;
		unsigned int	AttackDamage;
};

#endif