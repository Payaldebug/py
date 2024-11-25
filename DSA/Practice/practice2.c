#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int front=0;
int rear=-1;
void Enqueue()
{
    if(rear==MAXSIZE-1)
    {
        printf("\nqueue is full");
    }
    else{
        int n;
        printf("\nEnter your element");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}
void Dequeue()
{
    if(front>rear)
    {
        printf("\nqueue is empty");
    }
    else{
        int n;
        n=queue[front];
         front++;
        printf("\ndeleted element is %d",n);
    }
}
void Peek()
{
    if(front>rear)
    {
        printf("\nqueue is empty");
    }
    else{
        printf("\n View the recent value %d",queue[rear]);
    }
}
void Display()
{
    if(front>rear)
    {
        printf("\nqueue is empty");
    }
    else{
        int i;
        printf("queue menu are show:");
        for(i=rear;i>=front;i--)
        printf("\n%d",queue[i]);
    }
}
int main()
{
    int choice;
    do{
        printf("\nqueue menu:");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:Enqueue();
            break;
            case 2:Dequeue();
            break;
            case 3:Display();
            break;
            case 4:Peek();
            break;
            default:
            printf("Invalid choice");
        }
    }while(choice!=5);
    return 0;
}