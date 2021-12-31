#include <iostream>

using namespace std;

int main() {
	int i = 10, * ptr = &i;
	cout << " i의 값 = " << i;
	cout << "\n i의 메모리 주소 = " << &i;
	cout << "\n ptr의 메모리 주소 = " << &ptr;
	cout << "\n ptr의 값 = " << ptr;
	cout << "\n ptr의 참조 값 = " << *ptr;




	return 0;
}