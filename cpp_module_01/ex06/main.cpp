#include "Harl.hpp"

int levels(std::string input)
{
    std::string data[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (data[i] == input)
            return (i + 1);
    return (0);
}

int main(int ac, char **av) {
    Harl obj;
    if (ac != 2)
        return (std::cout << "fails argument\n", 1);
    int i = levels(av[1]);
    switch (i)
    {
        case 1:
            obj.debug();
        case 2:
            obj.info();
        case 3:
            obj.warning();
        case 4:
            obj.error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n"; 
    }
}