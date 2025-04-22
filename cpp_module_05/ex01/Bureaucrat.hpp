/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:54:59 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/09 15:23:36 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
# define _BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
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
		void				signForm(Form &);
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


