#include <stdio.h>
#include <stdlib.h>
struct node
{
    int id;
    char name;
    struct node *next;
};
struct node *start = NULL;
struct node *createnode()
{
    printf("You called createnode function\n");
    int x;
    char y;
    printf("Enter the id: ");
    scanf("%d", &x);
    printf("Enter the name: ");
    scanf(" %c", &y);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->id = x;
    newnode->name = y;
    newnode->next = NULL;
    return newnode;
}
void traverselinkedlist()
{
    printf("You Called traverse function\n");
    printf("Linked list: \n");
    struct node *i = start;
    while (i != NULL)
    {
        printf("ID: %d, Name: %c\n", i->id, i->name);
        i = i->next;
    }
}
// insert last
void insertlast()
{
    printf("you called insertlast function\n");
    struct node *newnode = createnode();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct node *i = start;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = newnode;
    }
}
// insert begin
void insertbegin()
{

    printf("you called insertbegin function\n");

    struct node *newnode = createnode();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
}

// inset any
void insertany()
{
    printf("You called insertany function\n");
    struct node *newnode = createnode();
    int search;
    printf("after which you want to insert: ");
    scanf("%d", &search);
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct node *i = start;
        while (i != NULL)
        {
            if (i->id == search)
            {
                newnode->next = i->next;
                i->next = newnode;
                break;
            }
            i = i->next;
        }
    }
}

void deletefirst()
{
    printf("You called delete first function\n");
    if (start == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        struct node *temp;
        temp = start;
        start = start->next;
        free(temp);
    }
}
void deletelast()
{

    printf("You called delete last function\n");
    if (start == NULL)
    {
        printf("Underflow\n");
    }
    else if (start->next == NULL)
    {
        start = NULL;
    }
    else
    {
        struct node *i = start;

        while (i->next->next != NULL)
        {
            i = i->next;
        }
        i->next = NULL;
    }
}

void deleteany()
{
    printf("You called delete any function\n");
    int search;
    printf("which node you want to delete: ");
    scanf("%d", &search);
    if (start == NULL)
    {
        printf("Underflow\n");
    }
    else if (start->id == search && start->next == NULL)
    {
        start = NULL;
    }
    else
    {
        struct node *i = start;
        while (i->next->id != search)
        {
            i = i->next;
        }
        i->next = i->next->next;
    }
}

int main()
{
    insertlast();
    traverselinkedlist();
    deleteany();
    traverselinkedlist();

    return 0;
}