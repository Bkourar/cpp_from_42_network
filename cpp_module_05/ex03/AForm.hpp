/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:06 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/21 11:59:43 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		virtual ~AForm();
		std::string			getName() const;
		int					getSign() const;
		int		getexec() const;
		bool				getIndicating() const;
		void				incrementexec();
		void				decrementexec();
		void				beSigned(Bureaucrat &);
		virtual void		execute(Bureaucrat const &executor) const = 0;
		void				executeForm(AForm const &form);
		class execTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class execTooLowException : public std::exception {
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
		const int			sign;
		const int			exec;
};

std::ostream&	operator<<(std::ostream& strm, const AForm&  obj);



#endif
