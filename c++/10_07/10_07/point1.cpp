#include <iostream>

using namespace std;

int main() {
	int i = 10, * ptr = &i;
	cout << " i�� �� = " << i;
	cout << "\n i�� �޸� �ּ� = " << &i;
	cout << "\n ptr�� �޸� �ּ� = " << &ptr;
	cout << "\n ptr�� �� = " << ptr;
	cout << "\n ptr�� ���� �� = " << *ptr;




	return 0;
}