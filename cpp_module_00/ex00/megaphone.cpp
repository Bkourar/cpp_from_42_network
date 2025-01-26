/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 09:44:45 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/26 15:59:37 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {

	int			j;
	std::string	str;

	if (ac == 1)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		j = 1;
		str = av[j];
		while (++j < ac)
			str += av[j];
		for (size_t i = 0; i < str.length(); i++)
			str[i] = (char)std::toupper(str[i]);
	}
	std::cout << str << std::endl;
	return (0);
}