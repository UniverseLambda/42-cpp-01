#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name): name(name), weapon(NULL) {
}

void HumanB::attack() {
	if (!weapon) {
		std::cout << name + " attacks with his bare hand (ouch)" << std::endl;
	} else {
		std::cout << name + " attacks with his " + weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &w) {
	weapon = &w;
}
