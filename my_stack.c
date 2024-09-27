#include <stdio.h>
#include <stdlib.h>

#define NUMBER 20
int stack[NUMBER];
int top = -1;

int isFull()
{
    if (top == NUMBER)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;

}
int peek()
{
    if (!isEmpty())
        return stack[top];
    else
        printf("The stack is empty!\n");
}
int push(int data)
{
    if (!isFull())
    {
        top = top + 1;
        stack[top] = data;
        return stack[top];
    }
    else
        printf("The stack is full\n");
}
int pop()
{
    if (!isEmpty())
    {
        int data = top;
        top = top - 1;
        return stack[data];
    }
    else
        printf("The stack is empty\n");
}
int main()
{
   // push(3);
    //push(5);
    printf("peek : %d",peek());
    printf("pop: %d",pop());
    printf("peek : %d",peek());
}