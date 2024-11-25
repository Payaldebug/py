#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
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
void preOrder(struct node*root){
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node*root){
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct node*root){
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void extractChildren(struct node* parent) 
{ 
    if (parent == NULL) {
        printf("Parent node is NULL.\n");
        return;
    }

    if (parent->left != NULL) {
        printf("\nLeft child of node %d is %d\n", parent->data, parent->left->data);
    } else {
        printf("Left child of node %d is NULL\n", parent->data);
    }

    if (parent->right != NULL) {
        printf("Right child of node %d is %d\n", parent->data, parent->right->data);
    } else {
        printf("Right child of node %d is NULL\n", parent->data);
    }
}
int main()
{
    struct node*p = createNode(1);
    struct node*p1 = createNode(2);
    struct node*p2 = createNode(3);
    struct node*p3 = createNode(4);
    struct node*p4 = createNode(5);
    struct node*p5 = createNode(6);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    display(p,0);
    
    printf("preOrder: ");
    preOrder(p);
    printf("\n");

    printf("postOrder: ");
    postOrder(p);
    printf("\n");

    printf("inOrder: ");
    inOrder(p);

    extractChildren(p1);
    return 0;
}    
