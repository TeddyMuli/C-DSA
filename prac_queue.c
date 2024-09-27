#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int queue[MAX];
int front = 0;
int rear = -1;
int count = 0;

int isEmpty()
{
    if (count == 0)
        return 1;
    return 0;
}
int isFull()
{
    if (count == MAX)
        return 1;
    return 0;
}
int peek()
{
    if (!isEmpty())
        return queue[front];
    printf("The queue is empty!");
}
int enQueue(int data)
{
    if (!isFull())
    {
        queue[++rear] = data;
        count++;
        return data;
    }
    printf("The queue is full!");
}
int deQueue()
{
    if (!isEmpty())
    {
        int data = queue[front++];
        count--;
        return data;
    }
    printf("The queue is empty!");
}
int main ()
{
    enQueue(2);
    enQueue(6);
    enQueue(3);
    enQueue(7);
    printf("Peek: %d\n",peek());
    printf("deQueue: %d\n",deQueue());
    printf("Peek: %d\n",peek());

}