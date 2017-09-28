#include <cstring>
#include <string>
#include <iostream>

#define assert_static(e)         \
  do {                           \
    enum {                       \
      __assert_static = 1 / (e), \
    };                           \
  } while (0);

template <typename U, typename T>
bool bit_map(U &a, T &b) {
	assert_static(sizeof(a) == sizeof(b));
	memcpy(&a, &b, sizeof(b));
	// std::cout << "a:" << a << " b:" << b << std::endl;//just for test
}

int main(int argc, char *argv[]) {
	int a = 123;
	double b = 123.00;
	char e = 'e';
	float f = 123.00;

	int m = 2;
	int n = 3;
	// bit_map<int, double>(a, b);  // compile error
	// bit_map<char, float>(e, f);  // compile error
	// bit_map<int, int>(m, n);  // compile right
	return 0;
}