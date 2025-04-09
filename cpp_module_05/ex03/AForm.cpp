#include "AForm.hpp"

AForm::AForm() : Name("Aform"), indicating(false), sign(1), Grade(150) {

}

AForm::AForm(const std::string name, bool indic, int signal, int val) : Name(name), indicating(indic), sign(signal) {
	if (val < 1)
		throw AForm::GradeTooHighException();
	else if (val > 150)
		throw AForm::GradeTooLowException();
	Grade = val;
}

AForm::AForm(const AForm &ob) {
	this->indicating = ob.getIndicating();
	this->Grade = ob.getGrade();
}

AForm& AForm::operator=(const AForm &ob) {
	if (this != &ob) {
		this->indicating = ob.getIndicating();	
		this->Grade = ob.getGrade();
	}
	return *this;
}

AForm::~AForm() {

}

void	AForm::incrementGrade() {

	if (Grade > 1) {
		Grade--;
	} else {
		throw GradeTooHighException();
	}
}

void	AForm::decrementGrade() {
	if (Grade < 150) {
		Grade++;
	} else {
		throw GradeTooLowException();
	}
}

std::string	AForm::getName() const {
	return Name;
}

int			AForm::getSign() const {
	return sign;
}

int AForm::getGrade() const {
	return Grade;
}

bool	AForm::getIndicating() const {
	return indicating;
}


const char* AForm::GradeTooHighException::what() const throw() {
    return "AForm grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "AForm grade is too low!";
}

const char* AForm::FailedFileException::what() const throw() {
    return "AForm Failed File !";
}

const char* AForm::SignException::what() const throw() {
    return "AForm is not Sign";
}

const char* AForm::AcceptSignException::what() const throw() {
    return "Bureaucrat's grade is too low to execute this form";
}

const char* AForm::DefaultException::what() const throw() {
    return " does not exist! ";
}

void	AForm::beSigned(Bureaucrat& bur) {

	if (this->getSign() >= bur.getGrade()) {
			this->indicating = true;
	}
	else
		throw AForm::SignException();
}

std::ostream&	operator<<(std::ostream& strm, const AForm & obj) {
	strm << obj.getName() << ", AForm grade " << obj.getGrade() << " indicating " << obj.getIndicating() 
	<< " sign " << obj.getSign() << std::endl;
	return strm;
}

