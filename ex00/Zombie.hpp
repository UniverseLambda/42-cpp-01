#pragma once

#include <string>

namespace zombies {
	class Zombie {
	private:
		std::string mName;

	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
	};

	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
} // namespace zombies
