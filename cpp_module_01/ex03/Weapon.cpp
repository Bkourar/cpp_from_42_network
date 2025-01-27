#include "Weapon.hpp"

Weapon::Weapon (const char *input) : message(input) {}

Weapon::~Weapon () {
    std::cout<< "weapon is over" << std::endl;
}

const char*    Weapon::getType () {return message;}
void     Weapon::setType(const char *str) {
    message = str;
}
