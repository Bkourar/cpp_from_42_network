/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:35 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/20 11:19:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    if (executor.getexec() > getSign())
        throw AForm::AcceptSignException();
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getTarget() << " has been robotomy Failed" << std::endl;
}