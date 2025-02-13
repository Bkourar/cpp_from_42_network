#include "ClapTrap.hpp"

int	main ( void ) {

	ClapTrap clap1("bilal");
	ClapTrap clap2("omar");
	
	while (clap1.getHitPoint() && clap2.getEnergyPoint()
	&& clap2.getHitPoint() && clap1.getEnergyPoint())
	{
		clap1.attack(clap2.getName());
		clap2.takeDamage(clap1.getHitPoint());
	}
	
}