#include "DiamondTrap.hpp"

int		main()
{
    std::cout << "\ndiamond construction: " << std::endl;
    DiamondTrap		di2("diamond");

    std::cout << "\nscav construction: " << std::endl;
    ScavTrap		scav("scav");

    std::cout << "\nfrag construction: " << std::endl;
    FragTrap		frag("frag");

    std::cout << "\nHit points: \n"; 
    std::cout << "diamondtrap: " << di2.getHitPoint() << ", fragtrap: " << frag.getHitPoint() <<  ", scavtrap: " << scav.getHitPoint() << std::endl;
    std::cout << "\nenergy points: \n";
    std::cout << "diamondtrap: " << di2.getEnergyPoint() << ", fragtrap: " << frag.getEnergyPoint() << ", scavtrap: " << scav.getEnergyPoint() << std::endl;
    std::cout << "\nattack damage: \n";
    std::cout << "diamondtrap: " << di2.getAttackDamage() << ", fragtrap: " << frag.getAttackDamage() << ", scavtrap: " << scav.getAttackDamage() << std::endl;
    std::cout << "\nattacking: \n";
    di2.attack("a victim");
    std::cout << "\nidentity check: \n";
    di2.whoAmI();
    std::cout << "\ncopy check: \n";
    DiamondTrap	di1( di2 );
    std::cout << std::endl;
    std::cout << "name: " << di1.getName() << ", " << di2.getName() << "; attack_damage: " << di1.getAttackDamage() << ", " << di2.getAttackDamage() << std::endl;
    std::cout << std::endl;
}