#include <iostream>
using namespace std;

// struct = "everything public class"
struct RGB {
	int r;
	int g;
	int b;

	RGB(int r_, int g_, int b_) : r(r_), g(g_), b(b_) {
	}

	int getSum() {
		return r+g+b;
	}
};

int main() {
	RGB col{255,255,0};
	cout << col.getSum() << endl;
	col.r = 128;
	cout << col.getSum() << endl;
}
