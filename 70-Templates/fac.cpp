#include <stdio.h>
#include <cinttypes>

template <long I>
struct fac {
	static const long long value = I * fac<I-1>::value;
};

template <>
struct fac<1> {
	static const long long value = 1;
};

int main() {
	long long a = fac<1>::value;
	long long b = fac<2>::value;
	long long c = fac<5>::value;
	long long d = fac<13>::value;

  // XXX: use PRId64 from <cinittypes> for platform independant long long printing
  // as of now clang (version 3.1) does not respect this (yet?)
	printf("%lld, %lld, %lld, %lld\n", a, b, c, d);

	return 0;
}
