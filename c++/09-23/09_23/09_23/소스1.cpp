#include <iostream>
using namespace std;

int main() {
	char in[20];
	int length = 0;
	cout << "�Է� : ";
	cin >> in;
	for (int i = 0; in[i]; i++) {
		length++;
	}
	for (int i = 0; i < length; i++) {
		cout << in[i];
	}
	return 0;
}