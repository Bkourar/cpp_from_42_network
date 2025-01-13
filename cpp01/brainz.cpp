#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;
    public:
        void    announce(void);
        Zombie (std::string str) {
            name = str;
        }
        ~Zombie () {
            std::cout << name << "  life time is over" << std::endl;
        }
};

void    Zombie::announce(void) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;

}

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main() {
    Zombie  *heapZombie;
    heapZombie = newZombie("fooooooo");
    heapZombie->announce();
    randomChump("you hhhh");
    delete heapZombie;
    return  0;
}

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

void    randomChump(std::string name) {
    Zombie Zombie(name);
    Zombie.announce();
}