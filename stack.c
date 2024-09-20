#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top=-1;

void Push()
{
    int n;
    if(top==MAXSIZE-1){
    printf("\nStack is Overflow");
    }else
    {
      printf("enter the element");
      scanf("%d",&n);
      top++;
      stack[top]=n;
    }
}
void Pop()
{
    int n;
    if(top==-1)
    {
    printf("\nStack is Underflow");
    }else{
        n=stack[top];
        top--;
        printf("Popped element is %d\n",n);
    }

}
void Display()
{
    int i;
    if(top==-1){
    printf("\nStack is Underflow");
    }else
    {
     printf("\nElement of stack");
     for(i=top;i>=0;i--)
     printf("%d\n",stack[i]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\nStack Menu:");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:Push();
            break;
            case 2:Pop();
            break;
            case 3:Display();
            break;
            
            
        }
    }while(choice!=4);
    return 0;
}


