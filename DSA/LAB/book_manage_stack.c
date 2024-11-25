#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top=-1;

void Add_book()
{
    int n;
    if(top==MAXSIZE-1)
    {
        printf("Library is full");
    }
    else{
        printf("\nEnter your book");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
}

void Remove_recent_book()
{
    int n;
    if(top==-1)
    {
        printf("\nLibrary is Empty");
    }
    else
    {
        n=stack[top];
        top--;
        printf("\nPopped Book %d\n",n);
    }
}

void view_recent_book()
{
    if(top==-1)
    {
        printf("\nLibrary is Empty");
    }
    else{
           printf("view the most recent book%d\n",stack[top]);
    }
}

void Display()
{
    int i;
    if(top==-1)
    {
        printf("\nLibrary is Empty");
    }
    else
    {
        printf("Library show all books\n");
        for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int choice;
    do{
        printf("\nWelcome to the Bookstack Management System!");
        printf("\n1.Add_book\n2.Remove_recent_book\n3.view_recent_book\n4.Display_allbooks\n5.Exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:Add_book();
            break;
            case 2:Remove_recent_book();
            break;
            case 3:view_recent_book();
            break;
            case 4:Display();
            break;
            default:
            printf("Invalid choice");
        }
    }while(choice!=4);
    return 0;
}