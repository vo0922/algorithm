#include <iostream>

using namespace std;

int main() {
	char string1[20] = "Dreams come true!", string2[20], * ptr1=string1;
	for (int i = 16; i >= 0; i--) {
		putchar(*(ptr1 + i));
	}
	for (int i = 0; i < 20; i++) {
		string2[i] = *(ptr1 + i);
	}
	cout << "string1 = ";
		
		for (int i = 0; i < 20; i++) {
			cout << string1[i];
		}
		cout << "string2 = ";
		for (int i = 0; i < 20; i++) {
			cout << string2[i];
		}

	return 0;
}