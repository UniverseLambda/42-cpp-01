#include "Zombie.hpp"

namespace zombies {
	Zombie *newZombie(std::string name) {
		return new Zombie(name);
	}

	void randomChump(std::string name) {
		Zombie zombieNoiseIntensifies(name);

		zombieNoiseIntensifies.announce();
	}
} // namespace zombies
