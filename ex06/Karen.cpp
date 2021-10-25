#include "Karen.hpp"

#include <iostream>

#include <fstream>

namespace releasethe {
	Karen::Karen(KarenFilterLevel minimumLevel): mMinimumLevel(minimumLevel) {
	}

	void Karen::complain(std::string level) {
		KarenFilterLevel realLevel = toKarenFilter(level);

		if (static_cast<int>(realLevel) >= static_cast<int>(mMinimumLevel)) {
			dispatch(realLevel);
		}
	}

	void Karen::dispatch(KarenFilterLevel level) {
		switch (level) {
		case KAREN_DEBUG:
			debug();
			break;
		case KAREN_INFO:
			info();
			break;
		case KAREN_WARNING:
			warning();
			break;
		case KAREN_ERROR:
			error();
			break;
		default:
			break;
		}
	}

	void Karen::debug() {
		std::cout << "(DEBUG) " << "Uber Eat sent my MocDanold command I cancelled and they still got it wrong!" << std::endl;
	}

	void Karen::info() {
		std::cout << "(INFO) " << "I cannot believe they are that stupid. It made my kid sad. I should not have to come here to complain!" << std::endl;
	}

	void Karen::warning() {
		std::cout << "(WARNING) " << "What? You won't take responsibility as a MocDanold employee? I think my kids and I deserve free ice cream. I've worked at MocDanold for 2 years!" << std::endl;
	}

	void Karen::error() {
		std::cout << "(ERROR) " << "You overstepped your boundaries. You don't know who I am you useless low-level MocDanold worker! I want to speak to your manager! NOW!" << std::endl;
	}

	KarenFilterLevel toKarenFilter(std::string str) {
		if (str == "DEBUG") {
			return KAREN_DEBUG;
		} else if (str == "INFO") {
			return KAREN_INFO;
		} else if (str == "WARNING") {
			return KAREN_WARNING;
		} else if (str == "ERROR") {
			return KAREN_ERROR;
		}
		return KAREN_UNKNOWN;
	}
} // namespace releasethe
