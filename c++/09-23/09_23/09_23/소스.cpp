#include<iostream>
using namespace std;

int main() {
	int prince = 0;
	int n;
	int money[] = { 50000,10000,1000,500,100,10,1 };
	cout << "금액입력:";
	cin >> n;

	for (int i = 0; i < 7; i++) {
		cout << money[i] << "원권 : "<< n / money[i]<<" ";
	}

	return 0;
}