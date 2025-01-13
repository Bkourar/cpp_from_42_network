#include <iostream>
#include <climits>

class Zombie {
    private:
        std::string name;
    public:
        void    set(std::string str);
        void    announce(void);
        // Zombie ();
        ~Zombie ();
};

// Zombie::Zombie () {
//     std::cout << "hello :: " << name << std::endl;
// }

Zombie::~Zombie () {
            std::cout << name << " :: life time is over" << std::endl;
}

void    Zombie::set(std::string str) {
    name = str;
}

void    Zombie::announce(void) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name);

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

Zombie* zombieHorde( int N, std::string name ) {
    if (N < 0 || N > INT_MAX || name.empty())
        return NULL;
    Zombie  *zombieHeap = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombieHeap[i].set(name);
    }
    return zombieHeap;
}