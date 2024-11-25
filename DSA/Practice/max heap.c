#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createNode(int data)
{
   struct node*n;
   n= (struct node*)malloc(sizeof(struct node));
   n->data=data;
   n->left=NULL;
   n->right=NULL;
}
struct node* insert(int arr,int data)
{
    int size,i;
    size=size+1;
    i=size+1;
    arr[i]=data;

}