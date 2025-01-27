/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:30:55 by bikourar          #+#    #+#             */
/*   Updated: 2025/01/26 17:30:56 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie  *heapZombie;
    heapZombie = newZombie("fooooooo");
    heapZombie->announce();
    randomChump("you hhhh");
    delete heapZombie;
    return  0;
}