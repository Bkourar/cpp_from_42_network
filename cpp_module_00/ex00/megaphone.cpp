#include <iostream>

int	main(int ac, char **av) {
	std::string	str;

	if (ac > 2)
		return (std::cout << "faile number of argement"<< std::endl, 1);
	else if (ac == 1)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		str = av[1];
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
	return (0);
}