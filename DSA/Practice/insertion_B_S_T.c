#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node* insert(struct node* root,int key)
{
    if(root==NULL)
    {
        return createNode(key);
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        root->left=insert(root->left,key);
    }
    else{
        root->right=insert(root->right,key);
    }
    return root;
}
void display(struct node*root,int space)
{
    if(root==NULL)
    {
        return;
    }
    int index = 5;
    space+=index;
    display(root->right,space);
    printf("\n");
    for(int i=index;i<space;i++)
    {
        printf(" ");
    }
    printf("%d\n",root->data);
    display(root->left,space);
}
void preOrder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node*root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node* root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
int main()
{
    struct node* p=createNode(5);
    struct node* p1=createNode(3);
    struct node* p2=createNode(7);
    struct node* p3=createNode(2);
    struct node* p4=createNode(4);
    struct node* p5=createNode(6);
    struct node*p6=insert(p2,9);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    display(p,0);

    printf("\npreOrder: ");
    preOrder(p);
    printf("\npostOrder: ");
    postOrder(p);
    printf("\ninOrder: ");
    inOrder(p);
   return 0;


}