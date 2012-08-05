#include <iostream>
#include <stdexcept>
using namespace std;

// this function will never throw anything
int foo() noexcept {
	// do some crazy stuff!
	return 0;
}

int main() {
	// everything can be thrown
	try {
		throw 42;
	} catch(int i) {
		cout << i << endl;
	}

	// the standard way
	// Java "error" != C++ "error"
	try {
		throw runtime_error(":(");
		// WARNING
		// do not use the following line
		//throw new runtime_error("foo");
		// because you throw a reference, not a pointer!
		// (never throw a pointer because nobody will free it)
	} catch(runtime_error& e) {
		cout << e.what() << endl;
	}

	// WARNING
	// compiler do not test, if a catch block exists
	//throw 42; // runtime problem

	try {
		// foo bar bar
	} catch(int i) {
		// integer catch
	} catch(float f) {
		// float catch
	}catch(...) {
		// catch them all!
	}
}
