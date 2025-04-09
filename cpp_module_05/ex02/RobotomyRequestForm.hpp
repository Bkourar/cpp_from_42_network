#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public :
			RobotomyRequestForm();
			RobotomyRequestForm (std::string targ);
			RobotomyRequestForm(const RobotomyRequestForm &);
			RobotomyRequestForm& operator=(const RobotomyRequestForm &);
			~RobotomyRequestForm();
			std::string		getTarget() const ;
			void	execute(Bureaucrat const & executor) const;
	private :
			std::string	target;
};

#endif