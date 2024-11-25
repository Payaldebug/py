#include<stdio.h>
#define MAXSIZE 100
char stack[MAXSIZE];
char infix[MAXSIZE];
char postfix[MAXSIZE];
int top =-1;
int main()
{
    printf("Enter the prefix expression");
    gets(infix);
    inToPost();
    {
        int i;
        int j;
        int next;
        char symbol;
        for(i=0;i<strlen(infix);i++)
        {
            symbol=infix[i];
            switch(symbol)
            {
                case '(':
                push(symbol);
                break;
                case')':
                while((next=pop())!='(')
                postfix[j++]=next;
                break;
                case'-':
                case'+':
                case'*':
                case'/':
                case'^':
                return 3;
                while(!isEmpty()&& precedence(stack[top])>= precedence(symbol))
                postfix[j++]=pop();
                push(symbol);
            }
        }
    }
}

