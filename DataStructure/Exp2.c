#include <stdio.h>
#define size 5
int Q[size];
int front, rear = 0;

void enqueue(int value)
{
    if (rear == size)
        printf("Queue is full");
    else
    {
        Q[rear] = value;
        rear++;
    }
}

void dequeue()
{
    if (front == rear)
        printf("\nQueue is empty");
    else
    {
        printf("\nElement: %d", Q[front]);
        front++;
    }
}

void display()
{
    int i;
    for (i = front; i < rear; i++)
    {
        printf("\n%d", Q[i]);
    }
}

void main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    printf("\n");
    dequeue(1);
    dequeue(2);
    dequeue(3);
    dequeue(4);
    dequeue(5);
    dequeue(6);
}