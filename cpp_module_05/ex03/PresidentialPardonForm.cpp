/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:29 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/20 11:20:51 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : AForm("bilal", false, 25, 5) {
	target = "Mahdi";
}

PresidentialPardonForm::PresidentialPardonForm (std::string targ) : AForm(targ, false, 25, 5) {
	target = targ;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &ob) : AForm(ob) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & ob) {
	AForm::operator=(ob);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string		PresidentialPardonForm::getTarget() const {
	return target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (getIndicating() == false)
        throw AForm::SignException();
    if (executor.getexec() > getSign())
        throw AForm::AcceptSignException();
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}