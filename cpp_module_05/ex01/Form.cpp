#include "Form.hpp"

Form::Form() : Name("form"), indicating(false), sign(1), Grade(150) {

}

Form::Form(const std::string name, bool indic, int signal, int val) : Name(name), indicating(indic), sign(signal) {
	if (val < 1)
		throw Form::GradeTooHighException();
	else if (val > 150)
		throw Form::GradeTooLowException();
	Grade = val;
}

Form::Form(const Form &ob) {
	this->indicating = ob.getIndicating();
	this->Grade = ob.getGrade();
}

Form& Form::operator=(const Form &ob) {
	if (this != &ob) {
		this->indicating = ob.getIndicating();	
		this->Grade = ob.getGrade();
	}
	return *this;
}

Form::~Form() {

}

void	Form::incrementGrade() {

	if (Grade > 1) {
		Grade--;
	} else {
		throw GradeTooHighException();
	}
}

void	Form::decrementGrade() {
	if (Grade < 150) {
		Grade++;
	} else {
		throw GradeTooLowException();
	}
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

	if (this->getSign() >= bur.getGrade()) {
		this->indicating = true;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& strm, const Form & obj) {
	strm << obj.getName() << ", Form grade " << obj.getGrade() << " indicating " << obj.getIndicating() 
	<< " sign " << obj.getSign() << std::endl;
	return strm;
}


