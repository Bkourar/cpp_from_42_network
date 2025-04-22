/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:56:53 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/09 15:01:52 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public :
			RobotomyRequestForm();
			RobotomyRequestForm (std::string targ);
			RobotomyRequestForm(const RobotomyRequestForm &);
			RobotomyRequestForm& operator=(const RobotomyRequestForm &);
			~RobotomyRequestForm();
			std::string		getTarget() const ;
			void	execute(Bureaucrat const &executor) const;
	private :
			std::string	target;
};

#endif