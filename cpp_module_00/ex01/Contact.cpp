/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:57:49 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/23 15:05:41 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	Contact::getFname() {return firstname;}
std::string	Contact::getLname() {return lastname;}
std::string	Contact::getNname() {return nickname;}
std::string	Contact::getPnmber() {return phonenumber;}
std::string	Contact::getDsecret() {return darckestsecret;}


void	Contact::setdate(std::string input, int i) {
	if (i == 0)
		firstname = input;
	if (i == 1)
		lastname = input;
	if (i == 2)
		nickname = input;
	if (i == 3)
		phonenumber = input;
	if (i == 4)
		darckestsecret = input;
}

void	Search(Contact c)
{
	if (c.getFname().length() >= 10)
		std::cout << "|" << c.getFname().substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << c.getFname();
	if (c.getLname().length() >= 10)
		std::cout << "|" << c.getLname().substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << c.getLname();
	if (c.getNname().length() >= 10)
		std::cout << "|" << c.getNname().substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << c.getNname();
}

Contact	Add() {
	std::string	s;
	Contact		compote;

	std::cin.clear();
	for (int i = 0; i < 5; i++) {
		Usr_message(i);
		if (getline(std::cin, s).eof())
			break ;
		if (std::cin.fail()) {
			std::cout << "Cin is fail" << std::endl;
			--i;
			continue ;
		}
		if (s.empty()) {
			--i;
			return_err(empty);
			continue ;
		}
		if (i <= 2 && process_name(s)) {
			--i;
			continue ;
		}
		else if (i > 2 && process_NPD(s, i)) {
			--i;
			continue ;
		}
		compote.setdate(s, i);
		std::cin.clear();
	}
	return (compote);
}

void	Usr_message(int i) {
	if (i == 0)
		std::cout << "write your firstname : ";
	if (i == 1)
		std::cout << "write your lastname : ";
	if (i == 2)
		std::cout << "write your nickname : ";
	if (i == 3)
		std::cout << "write your phonenumber : ";
	if (i == 4)
		std::cout << "write your darckestrecret : ";
}

void	return_err(t_typerror err) {
	
	if (err == empty)
		std::cout << "input is empty" << std::endl;
	else if (err == nmber)
		std::cout << "input has a nmber" << std::endl;
	else if (err == no_alpha || err == character)
		std::cout << "input has a character" << std::endl;
	else if (err == no_print)
		std::cout << "input has a not printable charater" << std::endl;
	else if (err == space)
		std::cout << "input has a white space" << std::endl;
}

int	process_name(std::string str) {

	if (str.empty())
		return (return_err(empty), 1);
	bool j = true;
	for (size_t i = 0; i < str.length(); i++) {
		if (!isspace(str[i]))
			j = false;
	}
	if (j == true)
		return (return_err(empty), 1);
	for (size_t i = 0; i < str.length(); i++) {
		if (!isprint(str[i]))
			return (return_err(no_print), 1);
	}
	return (0);
}

int	process_NPD(std::string str, int i) {

	if (str.empty())
		return (return_err(empty), 1);
	bool j = true;
	for (size_t i = 0; i < str.length(); i++) {
		if (!isspace(str[i]))
			j = false;
	}
	if (j == true)
		return (return_err(empty), 1);
	for (size_t j = 0; i == 3 && j < str.length(); j++) {
		if (!isdigit(str[j]))
			return (return_err(character), 1);
	}
	for (size_t j = 0; i == 4 && j < str.length(); j++) {
		if (!isprint(str[j]))
			return (return_err(no_print), 1);
	}
	return (0);
}