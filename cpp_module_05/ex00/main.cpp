/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:54:50 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/20 11:24:16 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	/*------------------- test 1 ------------------*/
	try {
			Bureaucrat b("kahy", 1);
			std::cout << b;
			b.incrementGrade();
			std::cout << b;  
			b.decrementGrade();
			std::cout << b;

			// Testing exception

			/*------------------ High increment Grade --------------------------*/
			Bureaucrat highGradeBureaucrat("High Grade",  1);
			highGradeBureaucrat.incrementGrade();  // This will throw GradeTooHighException
			/*------------------ Low decrement Grade -------------------------*/
			Bureaucrat lowGradeBureaucrat("Low Grade", 150);
			lowGradeBureaucrat.decrementGrade();  // This will throw GradeTooLowException
		} catch (const Bureaucrat::GradeTooHighException& ex) {
			std::cout << ex.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException& ex) {
			std::cout << ex.what() << std::endl;
		}

	return 0;
}
