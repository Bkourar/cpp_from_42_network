/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:31:34 by bikourar          #+#    #+#             */
/*   Updated: 2025/02/01 08:09:17 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie (std::string str) : name(str) {}

Zombie::~Zombie () {
	std::cout << name << "  life time is over" << std::endl;
}