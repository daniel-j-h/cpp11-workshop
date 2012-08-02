#include <iostream>

long fac(long i) {
	if (i == 0) {
		return 1;
	} else {
		return i * fac(i - 1);
	}
}

int main() {
	int n;
	std::cin >> n;

	std::cout << "fac(" << n << ")=" << fac(n) << std::endl;

	return 0;
}

