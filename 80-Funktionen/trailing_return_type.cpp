#include <iostream>
#include <sstream>
#include <string>

template<typename A, typename B>
auto add(A a, B b) -> decltype(a + b) {
	return a + b;
}

struct X {
	int a;
	int b;
	operator std::string() {
		std::stringstream ss;
		ss << "X({" << this->a << "," << this->b << "})";
		return ss.str();
	}
};
float operator+(const char& c, const X& x) {
	float af = static_cast<float>(x.a);
	float bf = static_cast<float>(x.b);
	float cf = static_cast<float>(c);
	return (cf + af) / bf;
}

int main() {
	char c = 'c';
	int i = 42;
	float f = 1337.1337;
	std::string s = "string";
	X x({1,10});

	std::cout << c << "+" << c << "=" << add(c,c) << std::endl;
	std::cout << c << "+" << i << "=" << add(c,i) << std::endl;
	std::cout << c << "+" << f << "=" << add(c,f) << std::endl;
	std::cout << c << "+" << s << "=" << add(c,s) << std::endl;
	std::cout << c << "+" << static_cast<std::string>(x) << "=" << add(c,x) << std::endl;

	return 0;
}

