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
struct node *insertBST(struct node *root, int x)
{
    if (root == NULL)
    {
        return create(x);
    }
    if (x < root->data)
    {
        root->left = insertBST(root->left, x);
    }
    else if (x > root->data)
    {
        root->right = insertBST(root->right, x);
    }

    return root;
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d \n", root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d \n", root->data);
}
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d \n", root->data);
    preorder(root->left);
    preorder(root->right);
}

struct node *findmin(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct node *findmax(struct node *root)
{
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteBST(struct node *root, int x)
{
    if (x > root->data)
        root->right = deleteBST(root->right, x);
    else if (x < root->data)
        root->left = deleteBST(root->left, x);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp = findmin(root->right);
            root->data = temp->data;
            root->right = deleteBST(root->right, temp->data);
        }
    }
    return root;
}
int main()
{

    root = insertBST(root, 10);
    insertBST(root, 2);
    insertBST(root, 1);
    insertBST(root, 17);
    insertBST(root, 21);
    insertBST(root, 19);

    printf("Before Delete: ");
    inorder(root);
    deleteBST(root, 17);
    printf("After Delete: ");
    inorder(root);
}