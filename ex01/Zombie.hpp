#pragma once

#include <string>

namespace zombies {
	class Zombie {
	private:
		std::string mName;

	public:
		Zombie();
		~Zombie();

		void announce(void);
		void tame(std::string name);
	};

	Zombie *zombieHorde(int N, std::string name);
} // namespace zombies
