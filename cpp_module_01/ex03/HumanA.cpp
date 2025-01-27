#include "HumanA.hpp"

HumanA::HumanA (const char* arr, Weapon &type_clube) : Aweapon(type_clube) , name(arr) {}

HumanA::~HumanA() {
    std::cout<< "humanA is over" << std::endl;
}

void    HumanA::attack(void) {
    std::cout << name << Aweapon.getType() << std::endl;
}
