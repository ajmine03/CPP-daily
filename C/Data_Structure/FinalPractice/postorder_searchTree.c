#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root = NULL;
struct node *create(int x)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf(" %d", root->data);
}
int main()
{
    root = create(10);
    root->left = create(2);
    root->right = create(5);
    root->left->left = create(7);
    root->right->right = create(8);
    root->right->right->left = create(1);
    root->right->right->right = create(9);
    postorder(root);
    return 0;
}