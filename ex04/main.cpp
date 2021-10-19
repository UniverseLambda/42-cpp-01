#include <fstream>
#include <iostream>

#include "ShaddyBuffer.hpp"

bool theRealMainShady(std::string path, std::string target, std::string replacement) {
	try {
		std::ifstream in(path.data());
		std::ofstream out((path + ".replace").data(), std::ofstream::out);
		ShaddyBuffer buff(target.size(), in, out);

		while (buff.hasNext()) {
			if (buff.matches(target)) {
				buff.next();
				out.write(replacement.data(), replacement.size());
			} else {
				if (!buff.flushOne()) {
					std::cerr << "IO error" << std::endl;
					return false;
				}
			}
		}
		buff.finalFlush();
	} catch (...) {
		std::cerr << "Some exception occured while << improving >> the file" << std::endl;
		return false;
	}

	return true;
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "Wrong argument count" << std::endl;
		return 1;
	}

	if (argv[1])

	return !theRealMainShady(argv[1], argv[2], argv[3]);
}