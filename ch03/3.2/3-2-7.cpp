#include <iostream>
using namespace std;

class DException {
public:
DException(double d) try : DException(1, d) {
		cout << "Run the body ." << endl;
	} catch (...) {
		cout << "caught the exceptions." << endl;
	}

private:
	DException(int i, double e) {
		cout << "throw the exception." << endl;
		throw 0;
	}
	int type;
	double data;
};

int main(int argc, char *argv[]) {
	DException d(1.2);
	return 0;
}