#include <stdio.h>
#include <stdlib.h>


#define MAX 5
int front = 0;
int rear = -1;
int count = 0;
int array[MAX];

int isEmpty()
{
    if (count == 0)
        return 1;
    else
        return 0;
}
int isFull()
{
    if (count == MAX)
        return 1;
    else
        return 0;
}
int peek()
{
    if (!isEmpty())
        return array[front];
    else
        printf("The queue is empty!\n");
}
int insert(int data)
{
    if (!isFull())
    {
        array[++rear] = data;
        count++;
    }
    else
        printf("The queue is full!\n");
}
int remove_mem()
{
    if (!isEmpty())
    {
        int data = array[front++];
        count--;
        return data;
    }
    else
        printf("The queue is empty!\n");
}
int main()
{
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    printf("Front: %d\n", peek());
    printf("Remove: %d\n", remove_mem());
    printf("Front: %d\n", peek());
}