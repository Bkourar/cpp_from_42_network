#include "Zombie.hpp"

int main() {
    Zombie      *Hpzombie;
    int         n;

    n = 5;
    Hpzombie = zombieHorde(n, "bilal");
    if (Hpzombie == NULL)
        return (std::cout << "failed argement" << std::endl, 1);
    for (int i = 0; i < n; i++)
        Hpzombie[i].announce();
    delete[] Hpzombie;
    return  0;
}