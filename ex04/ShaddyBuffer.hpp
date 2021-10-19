#pragma once

#include <fstream>
#include <string>

class ShaddyBuffer {
private:
	std::size_t backlogSize;
	char *backlog;
	std::size_t limit;
	std::ifstream &in;
	std::ofstream &out;

public:
	ShaddyBuffer(std::size_t backlogSize, std::ifstream &in, std::ofstream &out);
	~ShaddyBuffer();

	bool matches(std::string &target);

	bool flushOne();
	bool finalFlush();
	void next();
	bool hasNext();
};
