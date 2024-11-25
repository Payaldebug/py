#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createNode(int data)
{
   struct node*newnode;
   newnode= (struct node*)malloc(sizeof(struct node));// kyuki ye void type return krta h toh struct node se typecasting kr lenge
    if(newnode==NULL){
      printf("Memory is not allocated.");
     }
    else{
        
          newnode->data=data;
          newnode->left=NULL;
          newnode->right=NULL;
          
        }
   return newnode;
}
  struct node* insert(struct node* root,int data)
{
     if(root==NULL)
     {
       struct node* newnode=createNode(data);
       return newnode;
     }
       if(data< root->data)
       {
           root->left=insert(root->left,data);
       }
       else if (data>root->data)
       {
        root->right=insert(root->right,data);
       }
       return root;
     }
struct node* search(struct node* root, int key)
{
    if(root==NULL)
    {
        printf("Tree is not exist.");
    }
    else if(root->data==key)
    {
       return root;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}
int main() {
    struct node* root = NULL;  // Start with an empty BST

    // Insert nodes into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    
    // Search for a value
    int key = 40;
    if (search(root, key)) {
        printf("Node with value %d found in the BST.\n", key);
    } else {
        printf("Node with value %d not found in the BST.\n", key);
    }

    return 0;
}