#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public :
		AForm();
		AForm(std::string name, bool indic, int signal, int val);
		AForm(const AForm &);
		AForm& operator=(const AForm &);
		~AForm();
		std::string			getName() const;
		int					getSign() const;
		int		getGrade() const;
		bool				getIndicating() const;
		void				incrementGrade();
		void				decrementGrade();
		void				beSigned(Bureaucrat &);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		void				executeForm(AForm const &form);
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class FailedFileException : public std::exception {
			public:
				const char* what() const throw();
		};
		class SignException : public std::exception {
			public:
				const char* what() const throw();
		};
		class AcceptSignException : public std::exception {
			public:
				const char* what() const throw();
		};
		class DefaultException : public std::exception {
			public:
				const char* what() const throw();
		};
	private :
		const std::string	Name;
		bool				indicating;
		int					sign;	// sign 
		int		Grade;	// execute
};

std::ostream&	operator<<(std::ostream& strm, const AForm&  obj);



#endif
