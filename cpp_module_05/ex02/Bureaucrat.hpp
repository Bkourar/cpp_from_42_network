#ifndef _BUREAUCRAT_HPP
# define _BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>
// #include <string>
#include "AForm.hpp"

class AForm;
class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int val);
		Bureaucrat(const Bureaucrat& );
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &);
		std::string			getName() const ;
		int		getGrade() const ;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm &);
		void				executeForm(AForm const &form) const;
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
	private :
		const std::string		Name;
		int			Grade;
};

std::ostream&	operator<<(std::ostream& strm, const Bureaucrat&  obj);


#endif


