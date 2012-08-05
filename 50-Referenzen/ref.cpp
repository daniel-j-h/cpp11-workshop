#include <iostream>
using namespace std;

// swaps !extern! variables (by reference)
void mySwap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

// btw: the following function name will give you an error:
// void swap(int& a, int& b);
// because std::swap was included in our namespace

// avoids copy of i
void print(const int& i) {
	cout << i << endl;
}

///// BAD /////
// do never return a reference to a local object!
int& foo() {
	int i = 0;
	return i;
}
///////////////

int main() {
	int i = 1;
	int j = 2;

	mySwap(i,j);

	// following example will not work, because 1 und 2 are rvalues and have no names
	// so you cannot reference it
	// mySwap(1,2);
}
