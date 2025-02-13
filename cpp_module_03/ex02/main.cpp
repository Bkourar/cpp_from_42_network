#include "ClapTrap.hpp"


int	main ( void ) {

	ClapTrap	soldier("Satan");
	std::cout << soldier.getName() << " ";
	soldier.attack("head");
	soldier.takeDamage(10);
	std::cout << std::endl;
}