#include <iostream>
#include <vector>
using namespace std;

struct X {
	int i;
	float f;
	char c;
};


int main() {
	// i is an initializer list
	// not a vector/array/...
	auto i = {1,2,3};

	// can be used for initialzation
	vector<int> v1 = {1,2,3};
	vector<int> v2 = i;
	X x{42, 1337.1337, 'c'};

	// ... or for simple loops
	for(auto x : {2, 9, 0}) {
		cout << x << endl;
	}
}
