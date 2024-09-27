#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int stack[MAX];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

int isFull()
{
    if (top == MAX)
        return 1;
    return 0;
}

int peek()
{
    if (!isEmpty())
        return stack[top];
    printf("The stack is empty!");
}

int push(int data)
{
    if (!isFull())
    {
        top ++;
        stack[top] = data;
        return data;
    }
    printf("The stack is full!");
}

int pop()
{
    if (!isEmpty())
    {
        int data = top;
        top--;
        return stack[data];
    }
    printf("The stack is empty!");
}
int main ()
{
    push(2);
    push(3);
    push(6);
    push(8);
    push(0);
    printf("Peek: %d\n",peek());
    printf("Pop: %d\n",pop());
    printf("Peek: %d\n",peek());
   
}