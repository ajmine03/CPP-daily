#include <stdio.h>
#include <stdlib.h>
struct str
{
    int id;
    char name;
    struct str *next;
};
struct str *start = NULL;
struct str *create()
{
    int x;
    char y;
    printf("Input id and name : ");
    scanf("%d %c", &x, &y);
    struct str *newnode;
    newnode = (struct str *)malloc(sizeof(struct str));
    newnode->id = x;
    newnode->name = y;
    newnode->next = NULL;
    return newnode;
}
void traverse()
{
    struct str *i = start;
    while (i != NULL)
    {
        printf("%d %c \n", i->id, i->name);
        i = i->next;
    }
}
void inslast()
{
    struct str *newnode = create();
    struct str *i = start;
    if(start==NULL){
        start = newnode;
    }
    else{
    while (i->next != NULL)
    {
        i = i->next;
    }
    i->next = newnode;
}
}
void insbeg()
{
    struct str *newnode = create();
    struct str *i = start;
    if(start == NULL){
        start = newnode;
    }
    else{
    newnode->next = start;
    start = newnode;
    }
}
void insany()
{
    int search;
    struct str *newnode = create();
    struct str *i = start;
    printf("after which id you want to ins : ");
    scanf("%d", &search);
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
void deletefirst()
{
    printf("You called delete first function\n");
    if (start == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        struct str *temp;
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
        struct str *i = start;

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
        struct str *i = start;
        while (i->next->id != search)
        {
            i = i->next;
        }
        i->next = i->next->next;
    }
}
    int main()
    {

        deleteany();
        traverse();
    }