#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <climits>

class Zombie {
	private:
		std::string name;
	public:
		void	set(std::string str);
		void	announce(void);
		~Zombie ();
};

Zombie*	zombieHorde( int N, std::string name);

#endif