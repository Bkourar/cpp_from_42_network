/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:31:31 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/31 12:09:06 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		void	announce(void);
		Zombie (std::string str);
		~Zombie ();
};


Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif