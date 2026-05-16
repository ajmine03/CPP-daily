#include <stdio.h>
#include <stdlib.h>
struct structure
{

    int id;
    char name;
    struct structure *pre;
    struct structure *next;
};
struct structure *start = NULL;
struct structure *createnew()
{
    int x;
    char y;
    printf("Input your id : ");
    scanf("%d", &x);
    printf("Input your name : ");
    scanf(" %c", &y);
    struct structure *newnode;
    newnode = (struct structure *)malloc(sizeof(struct structure));
    newnode->id = x;
    newnode->name = y;
    newnode->pre = NULL;
    newnode->next = NULL;
    return newnode;
}
void insertbegin()
{
    struct structure *newnode = createnew();
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start->pre = newnode;
        start = newnode;
    }
}
void forwardtrav()
{
    printf("\nYou are in forward\n");

    struct structure *i = start;
    while (i != NULL)
    {
        printf("ID = %d , Name = %c\n", i->id, i->name);
        i = i->next;
    }
}
void reversetrav()
{
    printf("\nYou are in reverse\n");
    struct structure *i = start;
    while (i->next != NULL)
    {
        i = i->next;
    }
    while (i != NULL)
    {
        printf("ID = %d , Name = %c\n", i->id, i->name);
        i = i->pre;
    }
}

void inslast()
{
    struct structure *newnode = createnew();
    struct structure *i = start;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        while (i->next != NULL)
        {
            i = i->next;
        }
        newnode->pre = i;
        i->next = newnode;
    }
}
void insany()
{
    struct structure *newnode = createnew();
    struct structure *i = start;
    printf("Which id after you want to insert : ");
    int search;
    scanf("%d", &search);
    while (i != NULL)
    {
        if (i->id == search)
        {
            newnode->pre = i;
            newnode->next = i->next;
            i->next->pre = newnode;
            i->next = newnode;
            break;
        }
        i = i->next;
    }
}
void delfirst()
{
    struct structure *temp = start;
    start->next->pre = NULL;
    start = start->next;
    free(temp);
}
void dellast()
{
    struct structure *i = start;
    while (i->next->next != NULL)
    {
        i = i->next;
    }
    i->next = NULL;
}
void delany()
{
    struct structure *i = start;
    printf("which node after you want to delete :");
    int s;
    scanf("%d", &s);

    while (i->next->id != s)
    {
        // start == null -> uderflow
        //  if (start->id == search && start->next == NULL)
        //{
        //     start = NULL;
        // }
        i = i->next;
    }
    i->next->next->pre = i;
    i->next = i->next->next;
}
int main()
{
    insany();
    insany();
    insany();
    forwardtrav();
    
}