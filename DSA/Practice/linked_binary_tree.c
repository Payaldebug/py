#include<stdio.h>
#include<stdlib.h>//Use the standard library for malloc()
// Define the structure for a tree node
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
// Function to create a new node
struct node* createNode(int data)
{
    struct node*n;//creating a node pointer
    n=(struct node*)malloc(sizeof(struct node));//Allocating memory in the heap
    n->data=data;//Setting the data
    n->left=NULL;//Setting the left and right children to NULL
    n->right=NULL;//Setting the left and right children to NULL
    return n;//Finally returning the created node
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
// Pre-Order traversal function
void preOrder(struct node*root){
    if(root!=NULL)
    {
        printf("%d ",root->data);//print the node data
        preOrder(root->left);//Recursively traverse the left subtree
        preOrder(root->right);//Recursively traverse the right subtree
    }
}
// Post-Order traversal function
void postOrder(struct node*root){
    if(root!=NULL)
    {
        postOrder(root->left);//Recursively traverse the left subtree
        postOrder(root->right);//Recursively traverse the right subtree
        printf("%d ",root->data);//print the node data
    }
}
// In-Order traversal function
void inOrder(struct node*root){
    if(root!=NULL)
    {
        inOrder(root->left);//Recursively traverse the left subtree
        printf("%d ",root->data);//print the node data
        inOrder(root->right);//Recursively traverse the right subtree
    }
}

int main()
{
    //Constructing the root node - using function (Recommended)
    struct node*p = createNode(1);
    struct node*p1 = createNode(2);
    struct node*p2 = createNode(3);
    struct node*p3 = createNode(4);
    struct node*p4 = createNode(5);
    struct node*p5 = createNode(6);


    //linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
     display(p,0);
    // perform pre-order traversal and print the nodes 
    printf("preOrder: ");
    preOrder(p);
    printf("\n");
     // perform post-order traversal and print the nodes
    printf("postOrder: ");
    postOrder(p);
    printf("\n");
    // perform in-order traversal and print the nodes
    printf("inOrder: ");
    inOrder(p);
    return 0;
}    
