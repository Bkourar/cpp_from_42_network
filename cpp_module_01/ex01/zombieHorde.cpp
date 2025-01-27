#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N < 0 || N > INT_MAX || name.empty())
        return NULL;
    Zombie  *zombieHeap = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombieHeap[i].set(name);
    }
    return zombieHeap;
}