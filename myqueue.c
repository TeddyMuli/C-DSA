#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int queue[MAX];
int front = 0;
int rear = -1;
int count = 0;

int isFull()
{
    if (count == MAX)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if (count == 0)
        return 1;
    else
        return 0;
}
int peek()
{
    if (!isEmpty())
        return queue[front];
    printf("The queue is empty!\n");
}
int enQueue(int data)
{
    if (!isFull())
    {
        queue[++rear] = data;
        count++;
        return data;
    }
    else
        printf("The queue is full\n");
}
int deQueue()
{
    if (!isEmpty())
    {
        int data = queue[front++];
        count--;
        return data;
    }
    else
        printf("The queue is empty!\n");
}
int main()
{
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    printf("Front: %d\n", peek());
    printf("Remove: %d\n", deQueue());
    printf("Front: %d\n", peek());
}
