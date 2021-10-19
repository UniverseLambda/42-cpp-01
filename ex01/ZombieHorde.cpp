#include "Zombie.hpp"

namespace zombies {
	Zombie *zombieHorde(int N, std::string name) {
		Zombie *biiiies = new Zombie[N];

		std::string suffix = "";

		for (int i = 0; i < N; ++i) {
			if (i > 0) {
				suffix += " Jr";
			}

			biiiies[i].tame(name + suffix);
		}
		return biiiies;
	}
} // namespace zombies
