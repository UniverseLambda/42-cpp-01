#include "Zombie.hpp"

#include <iostream>

namespace zombies {
	Zombie::Zombie() {
		std::cout << "An unamed zombie has risen from the dead" << std::endl;
	}

	Zombie::~Zombie() {
		std::cout << mName << " has returned to hell" << std::endl;
	}

	void Zombie::announce(void) {
		std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
	}

	void Zombie::tame(std::string name) {
		mName = name;
		std::cout << mName << " has been tamed" << std::endl;
	}
} // namespace zombies
