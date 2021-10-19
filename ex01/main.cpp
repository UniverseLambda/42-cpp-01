#include "Zombie.hpp"

int main() {
	const int hordeSize = 42;

	zombies::Zombie *forTheHooooooorde = zombies::zombieHorde(hordeSize, "Ricardo");

	for (int i = 0; i < hordeSize; ++i) {
		forTheHooooooorde[i].announce();
	}

	delete[] forTheHooooooorde;
	return 0;
}
