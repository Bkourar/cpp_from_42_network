#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &ob) {
	*this = ob;
}

Intern& Intern::operator=(const Intern &ob) {
	if (this != &ob) {
		*this = ob;
	}
	return *this;
}

Intern::~Intern() {}

AForm*	Intern::makeForm(std::string name, std::string target) {
	AForm*	ptr = NULL;
	std::string	names[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	int	k = 5;

	for (int i = 0; i < 3; i++) {
		if (names[i] == name)
			k = i;
	}
	switch (k) {
		case 0 :
			std::cout << "Intern creates Form" << name << std::endl;
			ptr = new ShrubberyCreationForm(target);
			break ;
		case 1 :
			std::cout << "Intern creates Form" << name << std::endl;
			ptr = new RobotomyRequestForm(target);
			break ;
		case 2 :
			std::cout << "Intern creates Form" << name << std::endl;
			ptr = new RobotomyRequestForm(target);
			break ;
		default :
			std::cout << "Error: form " << name;
			throw AForm::DefaultException();
	}
	return	ptr;
}