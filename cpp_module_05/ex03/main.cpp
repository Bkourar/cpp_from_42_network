/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:24 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/21 12:05:55 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		delete rrf;
		std::cout << "----------------------------\n";
		rrf = someRandomIntern.makeForm("RobotomyRequest", "bilal");
		std::cout << *rrf;
		a.signForm(*rrf);
		a.executeForm(*rrf);
		delete rrf;
		std::cout << "----------------------------\n";
		rrf = someRandomIntern.makeForm("PresidentialPardon", "omar");
		std::cout << *rrf;
		a.signForm(*rrf);
		a.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e) {
		std::cout << " Exception " << e.what() << std::endl ;
	}
	remove("Bender_shrubbery");
	return 0;
}
