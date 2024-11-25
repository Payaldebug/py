#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top=-1;
void push()
{
    if(top==MAXSIZE-1)
    {
        printf("stack is full\n");
    }
    else{
        int n;
        printf("Enter your element");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
        int n;
        n=stack[top];
        top--;
        printf("\npopped element is %d",n);
       }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
        printf("\nview the recent top is%d",stack[top]);
       }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
        int i;
        printf("\nstack menu are show:");
        for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int choice;
    do{
        printf("\nStack Menu:");
        printf("\n1.push\n2.pop\n3.display\n4.peek\n5.exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            default:
            printf("Invalid choice");
        }
    }while(choice!=5);
    return 0;
}