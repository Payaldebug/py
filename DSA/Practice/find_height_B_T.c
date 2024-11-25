#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}; 

int height(struct Node* root) {
    if (root == NULL)
        return -1;

    int lHeight = height(root->left);
    int rHeight = height(root->right);

    return (lHeight > rHeight ? lHeight : rHeight) + 1;
}

struct Node* createNode(int data) 
{
    struct Node* n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    struct Node* p = createNode(1);
     struct Node* p1 = createNode(2);
     struct Node* p2 = createNode(3);
     struct Node* p3= createNode(4);
     struct Node* p4= createNode(5);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right =p4;
    
    
    printf("%d\n", height(p));
    
    return 0;
}