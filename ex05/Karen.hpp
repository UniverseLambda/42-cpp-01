#pragma once

#include <string>

namespace releasethe {
	class Karen;

	struct KarenBS {
		std::string level;
		void (Karen::*annoyance)();
	};

	class Karen {
	private:
		KarenBS mAnnoyances[5];

	public:
		Karen();

		void complain(std::string level);
	private:
		void debug();
		void info();
		void warning();
		void error();

		void sus();
	};
} // namespace releasethe
