/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:58:00 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/23 14:58:01 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {

	std::string	input;
	Contact		compte;
	Phonebook	ph;

	std::cout << "Welcome to phoneBook !!! " << std::endl;
	while (1)
	{
		std::cout << "phoneBook chose next !!! \n";
		std::cout << "1 : ADD \n" << "2 : SEARCH \n" << "3 : EXIT" << std::endl;
		std::cout << "->> your chose What !? : ";
		if (getline(std::cin, input).eof())
			break ;
		if (std::cin.fail()) {
			std::cout << "Cin is fail" << std::endl;
			continue ;
		}
		if (input == "ADD")
		{
			compte = Add();
			ph.setcount();
			ph.setADD(compte);
		}
		else if (input == "SEARCH")
			ph.getSEARCH();
		else if (input == "EXIT")
			return (std::cout<< "EXIT\n", 1);
		if (input.empty())
			std::cout << "empty\n";
		std::cin.clear();
	}
 	return (std::cout<< "\nEXIT" << std::endl, 1);
}