#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		void	set(std::string str);
		void	announce(void);
		~Zombie ();
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif