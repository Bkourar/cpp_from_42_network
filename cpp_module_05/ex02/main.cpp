#include <iostream>
#include <fstream>
#include <cassert>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"


int main() {
    try {
        Bureaucrat ceo("CEO", 1);
        ShrubberyCreationForm	shrubForm("Home");
        RobotomyRequestForm		a("ZAHIR");
        ceo.signForm(shrubForm);
        ceo.executeForm(shrubForm);
        ceo.signForm(a);
        ceo.executeForm(a);
        remove("Home_shrubbery");
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
