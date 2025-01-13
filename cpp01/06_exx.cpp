#include <iostream>

class Harl {
    public:
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );
};

void Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
                << " I really do! \n";
}

void Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." 
            << " You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." 
            << " I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}


int levels(std::string input)
{
    std::string data[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i; i < 4; i++)
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