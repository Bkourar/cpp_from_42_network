/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:57:32 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/23 16:37:53 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
#define Contact_HPP

# include <iostream>

typedef enum type {
	empty,
	nmber,
	character,
	no_print,
	no_alpha,
	space
}	t_typerror;



class	Contact {
	public:
		void		setdate(std::string input, int i);
		std::string	getFname();
		std::string	getLname();
		std::string	getNname();
		std::string	getPnmber();
		std::string	getDsecret();
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darckestsecret;
};

Contact	Add();
void			Search(Contact c);
void	return_err(t_typerror err);
void	Usr_message(int i);
int		process_NPD(std::string str, int i);
int		process_name(std::string str);



#endif