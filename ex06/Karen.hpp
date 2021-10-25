#pragma once

#include <string>

namespace releasethe {
	enum KarenFilterLevel {
		KAREN_UNKNOWN,
		KAREN_DEBUG,
		KAREN_INFO,
		KAREN_WARNING,
		KAREN_ERROR
	};

	class Karen {
	private:
		KarenFilterLevel mMinimumLevel;

	public:
		Karen(KarenFilterLevel minimumLevel);

		void complain(std::string level);
	private:
		void dispatch(KarenFilterLevel level);

		void debug();
		void info();
		void warning();
		void error();
		void unknown();
	};

	KarenFilterLevel toKarenFilter(std::string str);
} // namespace releasethe
