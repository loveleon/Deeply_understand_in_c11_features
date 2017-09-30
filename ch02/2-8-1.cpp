/*c++98 and c++11 sizeof diffrent place.
*
*
*
*/
#include <iostream>
#include <string>

using namespace std;

struct people {
public:
	int hand;
	static people *all;
};

int main() {
	people p;
	std::cout << "sizeof:(p.hand):" << sizeof(p.hand) << std::endl;
	std::cout << "sizeof:(people::all):" << sizeof(people::hand) << endl;
	cout << "sizeof:(people::hand):" << sizeof(people::hand) << endl;
	return 0;
}
