#include <iostream>
using namespace std;

void printStatus(int i, float f, char c) {
	cout << "i=" << i << " f=" << f << " c=" << c << endl << endl;
}

int main() {
	int i = 32;
	float f = 42.42;
	char c = 'c';
	printStatus(i, f, c);

	// simple lambda
	auto lambda1 = []{
		return 42;
	};
	cout << lambda1() << endl;
	printStatus(i, f, c);

	// add parameters
	auto lambda2 = [](int m, int n){
		return m*n;
	};
	cout << lambda2(3,4) << endl;
	printStatus(i, f, c);

	// define return type
	// "()" needed to use "->"
	auto lambda3 = [](int m, int n) -> float {
		return m*n;
	};
	cout << lambda3(3,4) << endl;
	printStatus(i, f, c);

	// copy local variables to lambda
	auto lambda4 = [=] {
		return i*f;
	};
	cout << lambda4() << endl;
	printStatus(i, f, c);

	// use reference of i,f,c
	auto lambda5 = [&]() -> float {
		i = 1337;
		f = i / 20;
		c++;
		return i*f*c;
	};
	cout << lambda5() << endl;
	printStatus(i, f, c);

	// mixed access
	auto lambda6 = [i, &c] {
		//i++; // error
		return i * c++;
	};
	cout << lambda6() << endl;
	printStatus(i, f, c);
}
