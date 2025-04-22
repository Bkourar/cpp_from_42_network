/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:56:55 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/09 15:01:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm () : AForm("bilal", false, 145, 137) {
    target = "bilal";
}

ShrubberyCreationForm::ShrubberyCreationForm (std::string targ) : AForm(targ, false, 145, 137) {
    target = targ;
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &ob) : AForm(ob) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & ob) {
	AForm::operator=(ob);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string		ShrubberyCreationForm::getTarget() const {
	return target;
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    std::ofstream outFile;
    if (getIndicating() == false)
        throw AForm::SignException();
    if ((int)executor.getexec() > getSign())
        throw AForm::AcceptSignException();
    outFile.open(getTarget() + "_shrubbery");
    if (!outFile) {
        throw AForm::FailedFileException();
    }

    outFile << "        &&& &&  &&&  &&&  &&&  &&&  &&&\n";
    outFile << "     &&&  &&&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "    &&&&&&&&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "      &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "       &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "         &&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "           &&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "             &&&&&&&&&&&&&&&&&&&&&&&\n";
    outFile << "              &&&&&&&&&&&&&&&&&&&\n";
    outFile << "                &&&&&&&&&&&&&&&\n";
    outFile << "                 &&&&&&&&&&&\n";
    outFile << "                  &&&&&&&\n";
    outFile << "                   &&&&&\n";
    outFile << "                    &&&\n";
    outFile << "                    &&&\n";
    outFile << "                    &&&\n";
    outFile << "                                          \n";
    outFile << "                                          \n";
    outFile << "                                          \n";
    outFile << "           *\n";
    outFile << "          /o\\\n";
    outFile << "         /o*o\\\n";
    outFile << "        /o*o*o\\\n";
    outFile << "       /o*o*o*o\\\n";
    outFile << "      /o*o*o*o*o\\\n";
    outFile << "     /o*o*o*o*o*o\\\n";
    outFile << "    /o*o*o*o*o*o*o\\\n";
    outFile << "   /o*o*o*o*o*o*o*o\\\n";
    outFile << "  /o*o*o*o*o*o*o*o*o\\\n";
    outFile << "        |||||||\n";
    outFile << "        |||||||\n";
    outFile << "        |||||||\n";
    outFile.close();
}
