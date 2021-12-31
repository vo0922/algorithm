#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 10
#define NULL 0
int top = 0;
int cnt = 0;
char stack[STACK_SIZE];
void push(char data) {
	if (top >= STACK_SIZE) {
		printf("***************OverFlow***************\n");
		return;
	}
	stack[top] = data;
	top++;
}

void pop() {
	if (top <= 0) {
		printf("***************Underflow***************\n");
		return;
	}
	char data = "";
	top--;
	data = (char)stack[top];
	stack[top] = NULL;
	printf("pop data -> %c \n", data);
}

void write() {
	printf(" stack -> %6s, top -> %d \n\n", stack, top);
}

main() {
	int i;
	char value;
	while (1) {
		int select;
		printf("push : 1, pop : 2, exit : 99 ==>");
		scanf_s("%d", &select);

		if (select == 99)
			break;

		while (getchar() != '\n');
		switch (select) {
			case 1:
				printf("push data : ");
				value = getchar();
				push(value);
				break;
			case 2:
				pop();
				break;
			default:
				break;
		}

		printf("\n");
		write();
	}
}