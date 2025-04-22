/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:55:21 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/20 11:33:33 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("bureaqrate") {
	exec = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int val) : Name(name) {

	if (val > 150)
		throw execTooLowException();
	else if (val < 1)
		throw execTooHighException();
	exec = val;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	this->exec = obj.getexec();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj) {
		this->exec = obj.getexec();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::string		Bureaucrat::getName() const {
	return Name;
}

int	Bureaucrat::getexec() const {
	return exec;
}

void	Bureaucrat::incrementexec() {

	if (exec > 1) {
		exec--;
	} else {
		throw execTooHighException();
	}
}

void	Bureaucrat::decrementexec() {
	if (exec < 150) {
		exec++;
	} else {
		throw execTooLowException();
	}
}

void	Bureaucrat::signForm(AForm &ob) {
	if (ob.getIndicating() == false)
		ob.beSigned(*this);
	else {
		std::cout << "bureaucrat " << this->getName() << " before signed " << ob.getName() << std::endl;
		return ;
	}
	std::cout << "bureaucrat " << this->getName() << " signed " << ob.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) const {
	form.execute(*this);
	std::cout << "bureaucrat " << this->getName() << " executed " << form.getName() << std::endl;
}
const char* Bureaucrat::execTooHighException::what() const throw() {
    return "Bureaucrat exec is too high!";
}

const char* Bureaucrat::execTooLowException::what() const throw() {
    return "Bureaucrat exec is too low!";
}

std::ostream&	operator<<(std::ostream& strm, const Bureaucrat & obj) {
	strm << obj.getName() << ", bureaucrat exec " << obj.getexec() << std::endl;
	return strm;
}
