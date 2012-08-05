#include <functional> // std::function
#include <iostream> // std::cout, std::endl
#include <vector> // std::vector
using namespace std;
using namespace std::placeholders; // _1, _2, ...

class Runnable {
public:
	long int operator()(int m, int n) {
		cout << "runnable class (m=" << m << ", n=" << n << ")" << endl;
		return m*n;
	}
};

long int cFunc(int m, int n) {
	cout << "c function (m=" << m << ", n=" << n << ")" << endl;
	return m*n;
}

int main() {
	Runnable runnable;
	auto lambda = [](int m, int n) -> long int {
		cout << "lambda (m=" << m << ", n=" << n << ")" << endl;
		return m*n;
	};

	long int x1 = runnable(1,2);
	long int x2 = cFunc(1,2);
	long int x3 = lambda(1,2);

	// can be stored by using function
	vector<function<long int(int, int)>> funcs;
	funcs.push_back(runnable);
	funcs.push_back(cFunc);
	funcs.push_back(lambda);
	for (auto f : funcs) {
		f(3,4);
	}

	// or bind (all/not all) parameters
	vector<function<long int(int)>> bFuncs;
	for (auto f : funcs) {
		bFuncs.push_back(bind(f, 5, _1));
	}
	for (auto f : bFuncs) {
		f(6);
	}
}
