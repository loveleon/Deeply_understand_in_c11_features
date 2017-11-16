#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Ptr {
public:
	Ptr(T* p) { p_ = p; }
	operator bool() const {
		if (p_) {
			return true;
		} else {
			return false;
		}
	}

private:
	T* p_;
};

int main() {
	int a = 5;
	Ptr<int> p(&a);
	if (p) {
		std::cout << "valid pointer." << std::endl;
	} else {
		cout << "invalid pointer." << endl;
	}

	Ptr<double> pdouble(0);
	cout << p + pdouble << endl;

	return 0;
}