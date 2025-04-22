/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:32 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/09 15:01:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			void	execute(Bureaucrat const &executor) const;
	private :
			std::string	target;
};

#endif