#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public :
			PresidentialPardonForm();
			PresidentialPardonForm(std::string targ);
			PresidentialPardonForm(const PresidentialPardonForm &);
			PresidentialPardonForm& operator=(const PresidentialPardonForm &);
			~PresidentialPardonForm();
			std::string		getTarget() const ;
			void	execute(Bureaucrat const & executor) const;
	private :
			std::string	target;
};

#endif