#ifndef _BUREAUCRAT_HPP
# define _BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
	public :
		Bureaucrat();
		Bureaucrat(std::string , int );
		Bureaucrat(const Bureaucrat& );
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &);
		std::string			getName() const ;
		int		getGrade() const ;
		void				incrementGrade();
		void				decrementGrade();
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


