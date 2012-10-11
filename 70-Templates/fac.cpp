#include <iostream>

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

  // printf with PRId64 currently needs workaround for libcxx
  // #define __STDC_FORMAT_MACROS before including <cinttypes>
  // see http://lists.cs.uiuc.edu/pipermail/cfe-dev/2012-October/024871.html
  std::cout << a << ", " << b << ", " << c << ", " << d << std::endl;
}
