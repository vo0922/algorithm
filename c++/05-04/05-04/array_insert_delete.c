#include<stdio.h>
int n;
int buffer = 10;

void insert(int arr[], int k, int a) {
	if (n > buffer) {
		printf ("������ ������ ������ �����ϴ�.");
	}
	else {
		for (int i = n; i > k - 1; i--) {
			arr[i] = arr[i - 1];
		}
		arr[k - 1] = a;
	}
}
void _delete(int arr[], int k) {
	if (n == 0) {
		printf("������ �����Ͱ� �����ϴ�.");
	}
	else {
		for (int i = k - 1; i < n; i++) {
			arr[i] = arr[i + 1];
		}
	}
}
void _print(int arr[]) {
	for (int i = 0; i < n; i++) {
		printf("%d \t", arr[i]);
	}
	printf("\n");
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8 };
	int k, a, b;

	n = 8;

	_print(arr);

	while (1) {
		printf("������ ���� 1, ���� 2, ���� 0 : ");
		scanf_s("%d", &b);
		switch (b) {
		case 0: exit(0);
		case 1: printf("������ ����\n ���° : ");
				scanf_s("%d", &k);
				printf("������ : ");
				scanf_s("%d", &a);
				insert(arr, k, a);
				_print(arr);
				break;
		case 2: printf("������ ����\n ���° : ");
				scanf_s("%d", &k);
				_delete(arr, k);
				_print(arr);
				break;
		}
	}

	return 0;
}
