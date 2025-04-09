#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern someRandomIntern;
		Bureaucrat	a("omar", 1);
		AForm* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
		std::cout << *rrf;
		a.signForm(*rrf);
		a.executeForm(*rrf);
		std::cout << "----------------------------\n";
		rrf = someRandomIntern.makeForm("RobotomyRequest", "bilal");
		std::cout << *rrf;
		a.signForm(*rrf);
		a.executeForm(*rrf);
		std::cout << "----------------------------\n";
		rrf = someRandomIntern.makeForm("PresidentialPardon", "omar");
		std::cout << *rrf;
		a.signForm(*rrf);
		a.executeForm(*rrf);
	}
	catch (std::exception &e) {
		std::cout << " Exception " << e.what() << std::endl ;
	}
	return 0;
}
