#include <iostream>
using namespace std;

int main() {
	int n;
	int a1 = 0;
	int a2 = 1;
	int a3, i;
	printf("구하고 싶은 항이 몇 번째 항인가요? : ");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("%d\t%d\t", a1, a2);

		for (i = 1; i < n - 1; i++) {
			a3 = a1 + a2;
			printf("%d\t", a3);
			a1 = a2;
			a2 = a3;
		}
	}
	printf("\n");
}