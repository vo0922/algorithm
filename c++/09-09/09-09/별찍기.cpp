#include <iostream>
using namespace std;

void main() {
	int n = 0;
	scanf("%d", &n);
	//1)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("================\n");
	//2)
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
		
	}
	printf("================\n");
	//3)
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("================\n");
	//4)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 2 * n - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}
}