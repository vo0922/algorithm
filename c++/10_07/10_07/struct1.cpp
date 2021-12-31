#include <iostream>

using namespace std;

int main() {
	struct a {
		int i;
		string s;
		char a;
	};
	a a_s = {1, "¤¾¤¾", 'g'};
	cout << a_s.i << "\t" << a_s.s << "\t" << a_s.a;

	return 0;
}
