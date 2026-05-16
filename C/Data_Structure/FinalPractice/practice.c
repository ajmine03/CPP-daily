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

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}
struct node *insertBST(struct node *root, int x)
{
    if (root == NULL)
    {
        return create(x);
    }
    else if (x > root->data)
    {
        root->right = insertBST(root->right, x);
    }
    else if (x < root->data)
    {
        root->left = insertBST(root->left, x);
    }
    return root;
}

struct node *finMin(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
struct node *searchX(struct node *root, int X)
{
    if (X > root->data)
    {
        root->right = searchX(root->right, X);
    }
    else if (X < root->data)
    {
        root->left = searchX(root->left, X);
    }
    return root;
}
int main()
{
    root = create(4);
    root->left = create(2);
    root->right = create(5);
    inorder(root);
}
