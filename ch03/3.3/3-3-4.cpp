#include <iostream>
using namespace std;

class HasPtrMem {
public:
	HasPtrMem() : d(new int(3)) { cout << "Constructor : " << ++n_ctr << endl; }
	HasPtrMem(const HasPtrMem &h) : d(new int(*h.d)) {
		cout << "Copy Constructor : " << ++n_cptr << endl;
	}
	// HasPtrMem(HasPtrMem &&h):d(new int(*h.d)){
	HasPtrMem(HasPtrMem &&h) : d(h.d) {
		h.d = nullptr;
		cout << "Move Constructor : " << ++n_mvtr << endl;
	}

	~HasPtrMem() {
		delete d;
		cout << " HasPtrMem descontructor " << ++n_dstr << endl;
	}

public:
	int *d;
	static int n_ctr;
	static int n_cptr;
	static int n_mvtr;
	static int n_dstr;
};

int HasPtrMem::n_ctr = 0;
int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_mvtr = 0;
int HasPtrMem::n_dstr = 0;

HasPtrMem GetTemp() {
	HasPtrMem h;
	cout << "Resource from : " << __func__ << ":" << hex << h.d << endl;
	return h;
}

int main(int argc, char *argv[]) {
	HasPtrMem a = GetTemp();
	cout << "Resource from : " << __func__ << ":" << hex << a.d << endl;
	return 0;
}
// g++ -std=c++11 3-3-4.cpp -fno-elide-constructors
