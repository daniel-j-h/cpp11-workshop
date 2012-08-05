#include <iostream>
#include <string>

template<typename T>
T add(T a, T b) {
	return a + b;
}

template<typename T>
class C {
public:
	C(T t) {
		this->t = t;
	}

	void doSomeStuff() {
		this->t *= 2; // (*)
		std::cout << this->t << std::endl;
	}
private:
	T t;
};

int main() {
	int i = 1;
	int j = 2;

	int x1 = add<int>(i, j);
	int x2 = add(i, j);
	float f = add<float>(i, j);

	C<int> cInt(42);
	cInt.doSomeStuff();

	C<std::string> cString("hello");
	//cString.doSomeStuff(); // error because of (*)
}
