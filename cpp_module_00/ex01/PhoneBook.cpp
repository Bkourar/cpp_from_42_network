/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:55:17 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/23 15:00:01 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		Phonebook::index;
void	Phonebook::setcount() { index += 1;}

void	Phonebook::setADD(Contact input) {
	if (index > 8)
		index = 1;
	book[index - 1] = input;
}

void	Phonebook::getSEARCH() {
	std::string	inp;

	std::cin.clear();
	if (book[0].getFname().empty()) {
		std::cout << "contact is empty\n";
		return ;
	}
	std::cout << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "firstname";
	std::cout << "|" << std::setw(10) << "lastname";
	std::cout << "|" << std::setw(10) << "nickname |\n";
	for (int i = 0; i < 8; i++) {
		if (book[i].getFname().empty())
			break ;
		std::cout << std::setw(10) << i;
		Search(book[i]);
		std::cout << std::endl;
	}
	std::cout << "\n entre your chose : ";
	if (getline(std::cin, inp).eof() || inp.length() != 1) {
		std::cout << "not found " << std::endl;
		return ;
	}
	int in = std::atoi(inp.c_str());
	if (in >= 0 && in <= 7) {
		std::cout << book[in].getFname() << std::endl;
		std::cout << book[in].getLname() << std::endl;
		std::cout << book[in].getNname() << std::endl;
		std::cout << book[in].getPnmber() << std::endl;
		std::cout << book[in].getDsecret() << std::endl;
	}
	else {
		std::cout << "not found " << std::endl;
		return ;
	}
}

