#include "Karen.hpp"

int main() {
	releasethe::Karen sigh;

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

	sigh.complain("\0");

	return 0;
}
