#include <iostream>
using namespace std;

// compile time execution
// no if
// no local variables
// only 1 return statement
constexpr long long fac(long i) {
	return i > 1 ? i * fac(i - 1) : 1;
}

int main() {
	// constexpr can be used for compile time allocation
	constexpr long long len = fac(3);
	char cstring[len];

	// and for static asserts
	static_assert(fac(0) == 1, "fac(0)!=1");
	static_assert(fac(1) == 1, "fac(1)!=1");
	static_assert(fac(9) == 362880, "fac(0)!=362880");

	cout << "fac(1)=" << fac(1) << endl;
	cout << "fac(8)=" << fac(8) << endl;
	cout << "fac(9)=" << fac(9) << endl;
}
