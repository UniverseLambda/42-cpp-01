#include "ShaddyBuffer.hpp"

ShaddyBuffer::ShaddyBuffer(std::size_t backlogSize, std::ifstream &in, std::ofstream &out):
	backlogSize(backlogSize),
	backlog(new char[backlogSize + 1]),
	limit(0),
	in(in),
	out(out) {
	backlog[backlogSize] = '\0';
	next();
}

ShaddyBuffer::~ShaddyBuffer() {
	delete[] backlog;
}

bool ShaddyBuffer::matches(std::string &target) {
	if (target.size() != limit) {
		return false;
	}

	return std::string(backlog) == target;
}

bool ShaddyBuffer::flushOne() {
	if (!out.write(backlog, 1))
		return false;

	for (std::size_t i = 1; i < limit; ++i) {
		backlog[i - 1] = backlog[i];
	}
	--limit;

	in.read(backlog + limit, backlogSize - limit);
	limit += in.gcount();
	return true;
}

bool ShaddyBuffer::finalFlush() {
	if (!out.write(backlog, limit))
		return false;
	return true;
}

void ShaddyBuffer::next() {
	in.read(backlog, backlogSize);
	limit = in.gcount();
}

bool ShaddyBuffer::hasNext() {
	return !in.eof() && !in.fail();
}
