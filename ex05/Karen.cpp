#include "Karen.hpp"

#include <iostream>

#include <fstream>

namespace releasethe {
	Karen::Karen() {
		mAnnoyances[0].level = "DEBUG";
		mAnnoyances[0].annoyance = &Karen::debug;

		mAnnoyances[1].level = "INFO";
		mAnnoyances[1].annoyance = &Karen::info;

		mAnnoyances[2].level = "WARNING";
		mAnnoyances[2].annoyance = &Karen::warning;

		mAnnoyances[3].level = "ERROR";
		mAnnoyances[3].annoyance = &Karen::error;

		mAnnoyances[4].level = "\0";
		mAnnoyances[4].annoyance = &Karen::sus;
	}

	void Karen::complain(std::string level) {
		for (std::size_t i = 0; i < 4; ++i) {
			if (mAnnoyances[i].level == level) {
				// Nice syntax
				(this->*(mAnnoyances[i].annoyance))();
				return;
			}
		}
		(this->*(mAnnoyances[4].annoyance))();
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

	// But... What is this method?
	void Karen::sus() {
		std::ifstream in("/dev/urandom");

		for (std::size_t i = 0; i < 8192; ++i) {
			std::cout << "\r(z*p_f%M@k) ";

			for (std::size_t j = 0; j < 65536; ++j) {
				asm("pause");
			}

			for (std::size_t j = 0; j < 64; ++j) {
				char c = 0;

				while (c < ' ') {
					in >> c;
				}

				std::cout << c;
			}
		}
		// Yep, we need to not forget the rules. ALWAYS HAVE A '\n'
		std::cout << std::endl;
	}
} // namespace releasethe
