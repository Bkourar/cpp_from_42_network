/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:02 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/21 12:00:42 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : Name("Aform"), indicating(false), sign(1), exec(150) {

}

AForm::AForm(const std::string name, bool indic, int signd, int val) :  Name(name), indicating(indic), sign(signd), exec(val) {
	if (val < 1 || signd < 1)
		throw AForm::execTooHighException();
	else if (val > 150 || signd > 150)
		throw AForm::execTooLowException();
}

AForm::AForm(const AForm &ob) : Name(ob.getName()), sign(ob.getSign()), exec(ob.getexec()) {
	this->indicating = ob.getIndicating();
}

AForm& AForm::operator=(const AForm &ob) {
	if (this != &ob) {
		this->indicating = ob.getIndicating();
	}
	return *this;
}

AForm::~AForm() {

}

std::string	AForm::getName() const {
	return Name;
}

int			AForm::getSign() const {
	return sign;
}

int AForm::getexec() const {
	return exec;
}

bool	AForm::getIndicating() const {
	return indicating;
}


const char* AForm::execTooHighException::what() const throw() {
    return "AForm exec is too high!";
}

const char* AForm::execTooLowException::what() const throw() {
    return "AForm exec is too low!";
}

const char* AForm::FailedFileException::what() const throw() {
    return "AForm Failed File !";
}

const char* AForm::SignException::what() const throw() {
    return "AForm is not Sign";
}

const char* AForm::AcceptSignException::what() const throw() {
    return "Bureaucrat's exec is too low toexecute this form";
}

const char* AForm::DefaultException::what() const throw() {
    return " does not exist! ";
}

void	AForm::beSigned(Bureaucrat& bur) {

	if (this->getSign() >= bur.getexec()) {
			this->indicating = true;
	}
	else
		throw AForm::SignException();
}

std::ostream&	operator<<(std::ostream& strm, const AForm & obj) {
	strm << obj.getName() << ", AForm exec " << obj.getexec() << " indicating " << obj.getIndicating() 
	<< " sign " << obj.getSign() << std::endl;
	return strm;
}

