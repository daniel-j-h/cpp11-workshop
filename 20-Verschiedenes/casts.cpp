#include <iostream>
using namespace std;

class A {
public:
	virtual void echo() {
		cout << "A" << endl;
	}
};

class B : public A{
public:
	void echo() override {
		cout << "B" << endl;
	}
};

void printOnly(const int& i) {
  const_cast<int&>(i) = i + 1;
	cout << "I'm a fake printer ;)" << endl;
}

int main() {
	// traditional conversion cast
	float f = 42.42;
	int i = static_cast<int>(f);
	cout << i << endl;

	// cast to read/write binary data
	const char* cstring = "Hello world!";
	const int* data = reinterpret_cast<const int*>(cstring);
	cout << *data << endl;

	// const const
	int test = 1;
	printOnly(test);
	cout << test << endl;

	// dynamic cast
	A* unknown = new B;
	unknown->echo();
	B* b = dynamic_cast<B*>(unknown);
	if (b != nullptr) { // if unkown is not a B object, the pointer should be nullptr
		b->echo();
	}
	delete unknown;
}
