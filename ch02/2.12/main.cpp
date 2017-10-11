#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	extern void test1();
	extern void test2();
	test1();
	test2();
	return 0;
}