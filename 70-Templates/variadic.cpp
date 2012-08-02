#include <iostream>

template<typename T, typename... Values>
T* dbgNew(Values... values) {
	std::cout << "new, size guess: " << sizeof(T) << std::endl;
	T* t = new T(values...);
	std::cout << "created whatever at " << t << std::endl;;
	return t;
}

class A {
	public:
		int i;
		A(int i) {
			std::cout << "A(" << i << ")" << std::endl;
			this->i = i;
		};
};

class B {
	public:
		float f;
		char c;
		B(float f, char c) {
			std::cout << "B(" << f << "," << c << ")" << std::endl;
			this->f = f;
			this->c = c;
		};
};

int main() {
	auto a = dbgNew<A>(42);
	auto b = dbgNew<B>(1337.1337, 'c');
	delete a;
	delete b;

	return 0;
}

