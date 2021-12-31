#include <iostream>

using namespace std;

int main() {
	int n = 0, * ptr;

	int sale[2][4] = { {63, 84, 140, 130},{157, 209, 251, 312} };

	ptr = &sale[0][0];
	for (int i = 0; i < 8; i++) {
		cout << "address : " << ptr << " sale " << i << " = " << *ptr << "\n";
		ptr++;
	}

	int(* ptr1)[4]= sale;

	
	return 0;
}
