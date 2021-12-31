#include <iostream>
using namespace std;

int main() {
	int score=0;
	scanf("%d",&score);
	if (score >= 90) {
		printf("A\n");
	}
	else if (score >=80) {
		printf("B\n");
	}
	else if (score >= 70) {
		printf("C\n");
	}
	else if (score >= 60) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}

	scanf("%d", &score);
	switch (score/10) {
	case 10 : case 9 : printf("A"); break;
	case 8 : printf("B"); break;
	case 7 : printf("C"); break;
	case 6 : printf("D"); break;
	default: printf("F"); break;
	}
}