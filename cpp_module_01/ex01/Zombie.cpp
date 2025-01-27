#include "Zombie.hpp"

Zombie::~Zombie () {
            std::cout << name << " :: life time is over" << std::endl;
}

void    Zombie::set(std::string str) {
    name = str;
}

void    Zombie::announce(void) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
