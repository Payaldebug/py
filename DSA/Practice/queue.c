#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int rear=-1;
int front=0;

void Insert()
{
    int n;
    if(rear==MAXSIZE-1)
    {
        printf("Queue is Overflow");
    }
    else
    {
        printf("\nEnter an element");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
    
}

void Delete()
{
    int n;
    if(front>rear)
    {
        printf("Queue is Underflow");
    }
    else{
        n=queue[front];
        printf("Deleted element%d\n",n);
        front++;
    }
    
}
void Display()
{
    int i;
    if(front>rear)
    {
    printf("Queue is underflow");
    }
    else{
        printf("Queue element are:\n");
        for(i=rear;i>=front;i--)
        printf("%d\n",queue[i]);
    }
}

int main()
{
    int choice;
    do{
    printf("Queue");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:Insert();
        break;
        case 2:Delete();
        break;
        case 3:Display();
        break;
    }
    }while(choice!=4);
    return 0;
}