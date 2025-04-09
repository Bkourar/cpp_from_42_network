#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public :
		Form();
		Form(std::string name, bool indic, int signal, int val);
		Form(const Form &);
		Form& operator=(const Form &);
		~Form();
		std::string			getName() const;
		int					getSign() const;
		int		getGrade() const;
		bool				getIndicating() const;
		void				incrementGrade();
		void				decrementGrade();
		void				beSigned(Bureaucrat &);
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
	private :
		const std::string	Name;
		bool				indicating;
		int					sign; // sign >
		int		Grade; // grade >
};

std::ostream&	operator<<(std::ostream& strm, const Form&  obj);



#endif
