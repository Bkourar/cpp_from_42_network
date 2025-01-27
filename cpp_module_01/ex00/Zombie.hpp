/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:31:31 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/26 17:31:32 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		void	announce(void);
		Zombie (std::string str) {
			name = str;
		}
		~Zombie () {
			std::cout << name << "  life time is over" << std::endl;
		}
};


Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif