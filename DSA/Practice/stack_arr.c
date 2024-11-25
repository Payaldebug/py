#include<stdio.h>
#define MAXSIZE 4
int stack_arr[MAXSIZE];
int top=-1;

void push(int data)
{
    top=top+1;
    stack_arr[top]=data;
}

void pop(int data)
{
    data=stack_arr[top];
    top=top-1;
}

void isFull()
{
    top=MAXSIZE-1;
}

void isEmpty()
{
    top=-1;
}
int main()
{
    int data;
    push(10);
    push(20);
    push(30);
    push(40);
    pop(10);
    pop(20);

}