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
		{"¹Ú½Å¿í", 2020, 10000}, {"¹Ú»óÀ±", 2019, 12000}, {"¹ÚÇØ¹Î", 2015, 8000}, {"¹Ú¼öÈ£", 2012, 5000}
	};
	for (int i = 0; i < 4; i++) {
		cout << "\n ÀÌ¸§ : " << park[i].name;
		cout << "\n ÀÔ»ç : " << park[i].year;
		cout << "\n ¿¬ºÀ : " << park[i].pay;
		cout << "\n--------------------------";
		sum += park[i].pay;
	}
	av = sum / 4;
	cout << "\n¿¬ºÀÇÕ°è : " << sum;
	cout << "\n¿¬ºÀÆò±Õ : " << av;

	return 0;
}