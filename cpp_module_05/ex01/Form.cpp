/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:55:02 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/21 12:03:35 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("form"), indicating(false), sign(1), Grade(150) {

}

Form::Form(const std::string name, bool indic, int signd, int val) :  Name(name), indicating(indic), sign(signd), Grade(val) {
	if (val < 1 || signd < 1)
		throw Form::GradeTooHighException();
	else if (val > 150 || signd > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &ob) : Name(ob.getName()), sign(ob.getSign()), Grade(ob.getGrade()) {
	this->indicating = ob.getIndicating();
}

Form& Form::operator=(const Form &ob) {
	if (this != &ob) {
		this->indicating = ob.getIndicating();
	}
	return *this;
}

Form::~Form() {

}

std::string	Form::getName() const {
	return Name;
}

int			Form::getSign() const {
	return sign;
}

int Form::getGrade() const {
	return Grade;
}

bool	Form::getIndicating() const {
	return indicating;
}


const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

void	Form::beSigned(Bureaucrat& bur) {
	if (this->getSign() >= bur.getGrade())
		this->indicating = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& strm, const Form & obj) {
	strm << obj.getName() << ", Form grade " << obj.getGrade() << " indicating " << obj.getIndicating() 
	<< " sign " << obj.getSign() << std::endl;
	return strm;
}


