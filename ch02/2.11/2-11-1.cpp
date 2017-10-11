#include <iostream>
using namespace std;

template <class T, class U>
void TempAdd(T a, U b) {
	cout << a << "+" << b << "=" << a + b << endl;
}

template <class P>
void TempFun(P p) {
	cout << p << endl;
}

int main(int argc, char* argv[]) {
	TempFun(1);
	TempFun('A');
	TempAdd(1, 'a');
	TempAdd(2, 3);
	return 0;
}