/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:57:44 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/09 15:01:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public :
			ShrubberyCreationForm();
			ShrubberyCreationForm (std::string targ);
			ShrubberyCreationForm(const ShrubberyCreationForm &);
			ShrubberyCreationForm& operator=(const ShrubberyCreationForm &);
			~ShrubberyCreationForm();
			std::string		getTarget() const ;
			void	execute(Bureaucrat const &executor) const;
	private :
			std::string	target;
};


#endif