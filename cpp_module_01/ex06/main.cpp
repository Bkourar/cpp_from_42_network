#include "Harl.hpp"

int main(int ac, char **av) {
    Harl obj;
    if (ac != 2)
        return (std::cout << "fails argument\n", 1);
    obj.complain(av[1]);
}