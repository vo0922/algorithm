#include<iostream>

using namespace std;

typedef struct Node 
{
    int data;

    struct Node* next;

}Node;
typedef struct Queue 
{

    Node* front;

    Node* rear;

    int count;

}Queue;
void InitQueue(Queue* queue);
int IsEmpty(Queue* queue); 
void Enqueue(Queue* queue, int data); 
int Dequeue(Queue* queue); 

void InitQueue(Queue* queue)
{
    queue->front = queue->rear = NULL; 

    queue->count = 0;
}

int IsEmpty(Queue* queue)
{
    return queue->count == 0;   
}


void Enqueue(Queue* queue, int data)
{
    Node* now = (Node*)malloc(sizeof(Node)); 
    now->data = data;
    now->next = NULL;

    if (IsEmpty(queue))
    {
        queue->front = now;     
    }

    else
    {
        queue->rear->next = now;
    }
    queue->rear = now;
    queue->count++;
}


int Dequeue(Queue* queue)
{
    int re = 0;
    Node* now;
    if (IsEmpty(queue))//큐가 비었을 때
    {
        return re;
    }
    now = queue->front;
    re = now->data;
    queue->front = now->next;
    free(now);
    queue->count--;
    return re;

}
int main(void)

{
    int i;
    Queue queue;

    InitQueue(&queue);

    for (i = 1; i <= 5; i++)
    {
        Enqueue(&queue, i);
    }
    while (!IsEmpty(&queue))

    {
        printf("%d ", Dequeue(&queue));

    }
    return 0;

}
