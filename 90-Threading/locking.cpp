#include <mutex>
#include <stdexcept>
using namespace std;

int main() {
	mutex m;

	try {
		m.lock();

		// do some work
		// resulting an exeption
		throw runtime_error("bad things!");

		// will never be called :()
		m.unlock();
	} catch (runtime_error& e) {
		// manual unlock
		m.unlock();
	}

	// better
	try {
		lock_guard<mutex> guardi(m);

		// do some work
		// resulting an exeption
		throw runtime_error("bad things!");

		// automatic unlock
	} catch (runtime_error& e) {
		// no unlock needed :)
	}
}
