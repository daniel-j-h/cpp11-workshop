// simple int enum
enum Keys {
	ESC, // = 0
	F1, // = 1
	F2, // = 2
	F3 // = 2
	// ...
};

// enum with start parameter
enum Cars {
	AUDI = 15,
	BMW, // = 16
	TESLA // = 17
	// ...
};

// typed enum with exact definitions
// only integral types are allowed
// (int, unsigned int, long, char, ...)
// no float, double, ... !!!
enum Colors : unsigned int {
	BLACK = 15,
	GREEN = 19,
	WHITE = 89
};

// without implicit int casting
enum class Food {
	BURGER,
	BIG_BURGER,
	BIGGEST_BURGER
};

int foo(int i) {
	return i;
}

int main() {
	foo(Colors::BLACK);
	//foo(Food::BURGER); // error
}
