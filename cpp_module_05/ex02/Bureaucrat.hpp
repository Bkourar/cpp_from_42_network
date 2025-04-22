/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:06:59 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/09 15:21:09 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
# define _BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>
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
		int					getexec() const ;
		void				incrementexec();
		void				decrementexec();
		void				signForm(AForm &);
		void				executeForm(AForm const &form) const;
		class execTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class execTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
	private :
		const std::string		Name;
		int						exec;
};

std::ostream&	operator<<(std::ostream& strm, const Bureaucrat&  obj);


#endif


