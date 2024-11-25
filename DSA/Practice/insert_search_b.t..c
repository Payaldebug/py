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
   n= (struct node*)malloc(sizeof(struct node));// kyuki ye void type return krta h toh struct node type m change krnge
   n->data=data;
   n->left=NULL;
   n->right=NULL;
    
}
struct node* insert(struct node* root,int data)
{
    if(data<root->data)
    {
         root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    
}
struct node* search(struct node* root,int key)
{
    if(root == NULL)
     return NULL;
    if(root->data==key)
     return root;
    else if(root->data > key)
       return search(root->left,key);
    else
         return search(root->right,key);
}

int main()
{
    struct node*p =  createNode(5);
    struct node*p1 = createNode(3);
    struct node*p2 = createNode(7);
    struct node*p3 = createNode(2);
    struct node*p4 = createNode(4);
    struct node*p5 = createNode(6);
    struct node*p6 = createNode(8);
    struct node* root=insert(root,1);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;



    struct node*n=search(p,3);
    if(n!= NULL)
      {
        printf("Element are found:%d\n",n->data);
      }
      else{
        printf("Elements not found\n");
      }
     return 0;  


}