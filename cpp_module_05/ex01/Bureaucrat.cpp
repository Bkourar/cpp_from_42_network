/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:54:56 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/20 11:28:22 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("bureaqrate") {
	Grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int val) : Name(name) {

	if (val > 150)
		throw GradeTooLowException();
	else if (val < 1)
		throw GradeTooHighException();
	Grade = val;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	this->Grade = obj.getGrade();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj) {
		this->Grade = obj.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::string		Bureaucrat::getName() const {
	return Name;
}

int	Bureaucrat::getGrade() const {
	return Grade;
}

void	Bureaucrat::incrementGrade() {

	if (Grade > 1)
		Grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade() {
	if (Grade < 150)
		Grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(Form &ob) {
	if (ob.getIndicating() == false)
		ob.beSigned(*this);
	else {
		std::cout << "bureaucrat " << this->getName() << " before signed " << ob.getName() << std::endl;
		return ;
	}
	std::cout << "bureaucrat " << this->getName() << " signed " << ob.getName() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too low!";
}

std::ostream&	operator<<(std::ostream& strm, const Bureaucrat & obj) {
	strm << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return strm;
}
