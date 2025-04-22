/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:56:40 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/20 11:34:53 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
