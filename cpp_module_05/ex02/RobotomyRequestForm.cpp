#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () : AForm("bilal", false, 72, 45) {
	target = "Omar";
	std::srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm (std::string targ) : AForm(targ, false, 72, 45) {
	target = targ;
	std::srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &ob) : AForm(ob) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & ob) {
	AForm::operator=(ob);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string		RobotomyRequestForm::getTarget() const {
	return target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (getIndicating() == false)
        throw AForm::SignException();
    if ((int)executor.getGrade() > getSign())
        throw AForm::AcceptSignException();
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getTarget() << " has been robotomy Failed" << std::endl;
}