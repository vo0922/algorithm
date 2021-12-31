#include <iostream>

using namespace std;

#define MAX 4

int rear = 0;
int front = 0;
int Q[MAX];

bool isFull();
bool isEmpty();
void enQueue(int item);
int deQueue();


void enQueue(int item)
{
	if (isFull())
	{
		cout << "Queue is Full" << endl;
		exit(1);
	}
	else
	{
		rear = (rear + 1) % MAX;
		Q[rear] = item;
	}
}


int deQueue()
{
	if (isEmpty())
	{
		cout << "Queue is Empty" << endl;
		exit(1);
	}
	else
	{
		front = (front + 1) % MAX;
		return Q[front];
	}
}


bool isEmpty()
{
	if (front == rear)
		return true;
	else return false;
}

bool isFull()
{
	if ((rear + 1) % MAX == front)
		return true;
	else
		return false;
}

int main(void)
{
	for (int i = 1; i < MAX; i++)
	{
		cout << "enQueue: " << i << endl;
		enQueue(i);
	}

	for (int i = 1; i < MAX; i++)
	{
		cout << "Dequeue: " << deQueue() << endl;
	}
	return 0;
}