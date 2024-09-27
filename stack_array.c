#include <stdio.h>
#include <stdlib.h>

#define N 20
int stack[20];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if (top == N)
        return 1;
    else
        return 0;
}
int peek()
{
    return(stack[top]);
}
int pop()
{
    int data;

    if (!isEmpty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
        printf("Could not retrieve data stack is empty!\n");
}
int push(int data)
{
    if(!isFull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
        printf("Couldn't add data, the stack is full!\n");
}

int main()
{
    for (int data = 0; data <= N; data++)
    {
        push(data);
    }
    printf("%d\n", peek());
    printf("%d\n", pop());
    printf("%d\n", peek());
}