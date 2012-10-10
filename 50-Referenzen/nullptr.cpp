#include <iostream>
#include <cstddef>

// stdlib may define NULL as followes:
#undef NULL
#define NULL (0)

// int and pointer function
void foo(int i) {
	std::cout << "foo(int i)" << std::endl;
}
void foo(char* c) {
	std::cout << "foo(char* c)" << std::endl;
}

// multiple pointer types
void bar(char* c) {
	std::cout << "bar(char* c)" << std::endl;
}
void bar(float* f) {
	std::cout << "bar(float* f)" << std::endl;
}

int main() {
	// fun(int i) OR fun(char* c)???
	//foo(NULL); // error

	// better
	foo(nullptr);

	// nullptr is of type std::nullptr_t and resides in <cstddef>
	//bar(nullptr); // error
	bar(static_cast<char*>(nullptr));
	bar(static_cast<float*>(nullptr));
}
