#include "HumanB.hpp"

HumanB::HumanB (const char *arr) : name(arr) {}

HumanB::~HumanB () {
    delete Bweapon;
    std::cout << "Bweapon is deleted" << std::endl;
}

void    HumanB::attack (void) {
    std::cout << name << Bweapon->getType() << std::endl;
}

void    HumanB::setWeapon (Weapon &B_weapon) {
    Bweapon = new Weapon(B_weapon);
}