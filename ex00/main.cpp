#include "Zombie.hpp"

int main() {
	zombies::Zombie *zzzzz;

	zombies::randomChump("Gérard");

	zzzzz = zombies::newZombie("Deux par deux");
	zzzzz->announce();
	delete zzzzz;

	return 0;
}