/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:45:06 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/23 14:31:15 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <string>
# include <limits>

class	Phonebook {
	private:
			static int	index;
			Contact		book[8];
	public:
			void	setcount();
			void	setADD(Contact input);
			void	getSEARCH();
};


#endif