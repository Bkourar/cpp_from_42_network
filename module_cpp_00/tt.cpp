#include<iostream>
#include <iomanip>
#include <string>
#include <limits>

class Contact	Add();
void			Search(Contact c);

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

std::string	Contact::getFname() {return firstname;}
std::string	Contact::getLname() {return lastname;}
std::string	Contact::getNname() {return nickname;}
std::string	Contact::getPnmber() {return phonenumber;}
std::string	Contact::getDsecret() {return darckestsecret;}
int		Phonebook::index;
void	Phonebook::setcount() { index += 1;}
void	Phonebook::setADD(Contact input) { 

	if (index > 8)
		index = 1;
	book[index - 1] = input;
}
void	Phonebook::getSEARCH() {
	int in;

	if (book[0].getFname().empty()) {
		std::cout << "contact is empty";
		return ;
	}
	for (int i = 0; i < 8; i++) {
		if (book[i].getFname().empty())
			break ;
		std::cout << std::setw(10) << i;
		Search(book[i]);
		std::cout << "\n";
	}
	std::cout << "\n entre your chose : ";
	std::cin.clear();
	std::cin >> in;
	if (in >= 0 && in <= 7) {
		std::cout << book[in].getFname() << std::endl;
		std::cout << book[in].getLname() << std::endl;
		std::cout << book[in].getNname() << std::endl;
		std::cout << book[in].getPnmber() << std::endl;
		std::cout << book[in].getDsecret() << std::endl;
	}
	else {
		std::cout << "not found \n";
		return ;
	}
}

int main() {

	std::string	input;
	Contact		compte;
	Phonebook	ph;

	while (1)
	{
		std::cout << "Welcome to phoneBook chose next !!! \n";
		std::cout << "1 : ADD \n" << "2 : SEARCH \n" << "3 : EXIT \n";
		std::cout << "->> your chose What !? : ";
		std::cin >> input;
		if (std::cin.eof())
			break ;
		if (std::cin.fail()) {
			std::cout << "Cin is fail \n";
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
 	return (std::cout<< "\nEXIT\n", 1);
}

void	Usr_message(int i)
{
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
		std::cout << "input is empty\n";
	else if (err == nmber)
		std::cout << "input has a nmber\n";
	else if (err == no_alpha || err == character)
		std::cout << "input has a character\n";
	else if (err == no_print)
		std::cout << "input has a not printable charater\n";
	else if (err == space)
		std::cout << "input has a white space\n";
}

int	process_name(std::string str) {

	if (str.empty())
		return (return_err(empty), 1);
	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i]))
			return (return_err(nmber), 1);
		if (!isalpha(str[i]))
			return (return_err(no_alpha), 1);
	}
	return (0);
}

int	process_NPD(std::string str, int i) {

	if (str.empty())
		return (return_err(empty), 1);
	for (int j = 0; i == 2  && j < str.length(); j++) {
		if (!isprint(str[j]))
			return (return_err(no_print), 1);
		if (isspace(str[j]))
			return (return_err(space), 1);
	}
	for (int j = 0; i == 3 && j < str.length(); j++) {
		if (!isdigit(str[j]))
			return (return_err(character), 1);
	}
	for (int j = 0; i == 4 && j < str.length(); j++) {
		if (!isprint(str[j]))
			return (return_err(no_print), 1);
	}
	return (0);
}

Contact	Add()
{
	std::string	s;
	Contact		compote;

	std::cin.ignore();
	std::cin.clear();
	for (int i = 0; i < 5; i++) {
		Usr_message(i);
		if (getline(std::cin, s).eof())
			break ;
		if (std::cin.fail()) {
			std::cout << "Cin is fail \n";
			--i;
			continue ;
		}
		if (s.empty()) {
			--i;
			return_err(empty);
			continue ;
		}
		if (i < 2 && process_name(s)) {
			--i;
			continue ;
		}
		else if (i >= 2 && process_NPD(s, i)) {
			--i;
			continue ;
		}
		compote.setdate(s, i);
		std::cin.clear();
	}
	return (compote);
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
		std::cout << "|"  << std::setw(10) << c.getNname().substr(9) << ".";
	else
		std::cout << "|" << std::setw(10) << c.getNname();
}