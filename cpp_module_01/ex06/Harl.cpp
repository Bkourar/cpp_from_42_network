#include "Harl.hpp"

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

int levels(const std::string& input)
{
    const char * data[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
        if (data[i] == input)
            return (i + 1);
    return (0);
}

void Harl::complain(const std::string &level) {

	int j = levels(level);
	void (Harl::*ptr_fun[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (j)
	{
		case 1:
			for (int i = j; i <= 4; i++)
				(this->*ptr_fun[i - 1])();
			break ;
		case 2:
			for (int i = j; i <= 4; i++)
				(this->*ptr_fun[i - 1])();
			break ;
		case 3:
			for (int i = j; i <= 4; i++)
				(this->*ptr_fun[i - 1])();
			break ;
		case 4:
			for (int i = j; i <= 4; i++)
				(this->*ptr_fun[i - 1])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n"; 
	}
}
