#include "Zombie.hpp"

int main() {
    std::string name;
    Zombie      *Hpzombie;
    int         n;

    n = 5;
    name = "anas";
    Hpzombie = zombieHorde(n, "bilal");
    if (Hpzombie == NULL)
        return (std::cout << "failed argement" << std::endl, 1);
    for (int i = 0; i < n; i++)
        Hpzombie[i].announce();
    delete[] Hpzombie;
    return  0;
}