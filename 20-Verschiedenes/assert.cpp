#include <cassert> // <assert.h>

int main() {
	assert(1 == 2); // runtime error
	static_assert(sizeof(char) == 1, "wrong char size");
	// static_assert(sizeof(char) == 2, "wrong char size"); // compile time error
}
