#include "ScavTrap.hpp"


int		main()
{
	ScavTrap			scav1("robot_A");
	ScavTrap			scav2("robot_B");

	std::cout << std::endl;
	while (scav2.getHitPoint())
	{
		scav1.attack(scav2.getName());
		scav2.takeDamage(scav1.getAttackDamage());
		if (!scav2.getHitPoint())
			scav2.beRepaired(scav1.getAttackDamage());
		std::cout << std::endl;
	}
	scav1.guardGate();
	std::cout << std::endl;
}