#include <iostream>
#include <sstream>
#include <string>

const int POOLSIZE = 10;

void* offset(void* base, int offset) {
	return static_cast<char*>(base) + offset;
}

int main() {
	// allocate
	auto s = sizeof(std::string);
	void* pool = operator new(s * POOLSIZE);

	// construct
	for (int i = 0; i < POOLSIZE; i++) {
		std::stringstream ss;
		ss << "string number " << i;

		std::string* ptr = static_cast<std::string*>(offset(pool, i * s));
		new (ptr) std::string(ss.str());
	}

	// do some stuff
	for (int i = 0; i < POOLSIZE; i++) {
		std::string* ptr = static_cast<std::string*>(offset(pool, i * s));
		std::cout << *ptr << std::endl;
	}

	// destruct
	for (int i = 0; i < POOLSIZE; i++) {
		std::string* ptr = static_cast<std::string*>(offset(pool, i * s));
		ptr->~basic_string();
	}

	// free
	operator delete(pool);
	return 0;
}
