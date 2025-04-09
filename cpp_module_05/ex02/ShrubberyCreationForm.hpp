#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public :
			ShrubberyCreationForm();
			ShrubberyCreationForm (std::string targ);
			ShrubberyCreationForm(const ShrubberyCreationForm &);
			ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
			~ShrubberyCreationForm();
			std::string		getTarget() const ;
			void	execute(Bureaucrat const & executor) const;
	private :
			std::string	target;
};


#endif