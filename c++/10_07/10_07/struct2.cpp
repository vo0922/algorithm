#include <iostream>

using namespace std;

struct employee {
	char name[10];
	int year;
	int pay;
};

int main() {
	int sum = 0, av = 0;
	struct employee park[4] = {
		{"�ڽſ�", 2020, 10000}, {"�ڻ���", 2019, 12000}, {"���ع�", 2015, 8000}, {"�ڼ�ȣ", 2012, 5000}
	};
	for (int i = 0; i < 4; i++) {
		cout << "\n �̸� : " << park[i].name;
		cout << "\n �Ի� : " << park[i].year;
		cout << "\n ���� : " << park[i].pay;
		cout << "\n--------------------------";
		sum += park[i].pay;
	}
	av = sum / 4;
	cout << "\n�����հ� : " << sum;
	cout << "\n������� : " << av;

	return 0;
}