#include "Karen.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
	releasethe::KarenFilterLevel minLevel;

	if (argc != 2 || (minLevel = releasethe::toKarenFilter(argv[1])) == releasethe::KAREN_UNKNOWN) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;
	}

	releasethe::Karen sigh(minLevel);

	sigh.complain("DEBUG");

	sigh.complain("INFO");

	sigh.complain("DEBUG");
	sigh.complain("INFO");
	sigh.complain("WARNING");

	sigh.complain("DEBUG");
	sigh.complain("INFO");
	sigh.complain("WARNING");
	sigh.complain("ERROR");

	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");
	sigh.complain("ERROR");

	return 0;
}
