/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:55:09 by bikourar          #+#    #+#             */
/*   Updated: 2025/04/21 11:58:20 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("bilal", 2);
        std::cout << b;
        Form d("omar", false, 50, 4);
        b.signForm(d);
        // b.signForm(d);
        // b.signForm(d);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
	return 0;
}
