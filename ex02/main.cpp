#include <string>

#include <iostream>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;	// IT IS THERE
	std::string &stringREF = brain;		// YEAH, RIGHT THERE

	std::cout << "brain address:     " << &brain << std::endl;
	std::cout << "brain ptr address: " << stringPTR << std::endl;
	std::cout << "brain ref address: " << &stringREF << std::endl;
	std::cout << "brain:             " << brain << std::endl;
	std::cout << "brain ptr address: " << *stringPTR << std::endl;
	std::cout << "brain ref address: " << stringREF << std::endl;
	return 0;
}
