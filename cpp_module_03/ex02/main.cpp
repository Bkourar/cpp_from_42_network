#include "FragTrap.hpp"

int		main()
{
	FragTrap			frag1("robot_A");
	FragTrap			frag2("robot_B");

	std::cout << std::endl;
	while (frag2.getHitPoint())
	{
		frag1.attack(frag2.getName());
		frag2.takeDamage(frag1.getAttackDamage());
		if (!frag2.getHitPoint())
			frag2.beRepaired(frag1.getAttackDamage());
		std::cout << std::endl;
	}
	frag1.highFivesGuys();
	std::cout << std::endl;
}