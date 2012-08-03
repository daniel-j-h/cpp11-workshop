#include <iostream>

long long fac(long long i) {
	if (i == 0) {
		return 1;
	} else {
		return i * fac(i - 1);
	}
}

int main() {
	long n;
	std::cin >> n;

	std::cout << "fac(" << n << ")=" << fac(n) << std::endl;

	return 0;
}

