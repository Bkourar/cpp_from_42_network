#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public :
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& );
		DiamondTrap& operator=( const DiamondTrap& );
		~DiamondTrap();
		void whoAmI();
	private :
		std::string	Name;
};


#endif