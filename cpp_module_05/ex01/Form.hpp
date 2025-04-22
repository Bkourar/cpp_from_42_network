/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:55:06 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/21 11:46:08 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		int					getGrade() const;
		bool				getIndicating() const;
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
		const int			sign;
		const int			Grade;
};

std::ostream&	operator<<(std::ostream& strm, const Form&  obj);



#endif
