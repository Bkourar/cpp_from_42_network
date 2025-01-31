#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    Zombie  *zombieHeap =  new (std::nothrow) Zombie[N];
    if (zombieHeap == NULL)
        return NULL;
    for (int i = 0; i < N; i++)
        zombieHeap[i].set(name);
    return zombieHeap;
}