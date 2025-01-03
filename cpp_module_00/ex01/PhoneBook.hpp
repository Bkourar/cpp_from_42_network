#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP

#include<iostream>
#include <iomanip>
#include <string>
#include <limits>

typedef enum type {
	empty,
	nmber,
	character,
	no_print,
	no_alpha,
	space
}	t_typerror;

class	Contact {
	private:
			std::string	firstname;
			std::string	lastname;
			std::string	nickname;
			std::string	phonenumber;
			std::string	darckestsecret;
	public:
			void		setdate(std::string input, int i);
			std::string	getFname();
			std::string	getLname();
			std::string	getNname();
			std::string	getPnmber();
			std::string	getDsecret();
};

class	Phonebook {
	private:
			static int	index;
			Contact		book[8];
	public:
			void	setcount();
			void	setADD(Contact input);
			void	getSEARCH();
};

class Contact	Add();
void			Search(Contact c);

#endif