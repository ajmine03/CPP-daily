#include <stdio.h>
#include <stdlib.h>
struct structure
{
    int id;
    char name;
    struct structure *next;
};

struct structure *start;
// create node funtion
struct structure *createnew()
{
    int x;
    char y;
    printf("Input newnode id :");
    scanf("%d", &x);
    printf("Input newnode name of id %d :", x);
    scanf(" %c", &y);

    struct structure *newnode;
    newnode = (struct structure *)malloc(sizeof(struct structure));
    newnode->id = x;
    newnode->name = y;
    newnode->next = NULL;
    return newnode;
}
// traversing funtion
void traversing()
{
    printf("You are in traversing funtion\n");
    struct structure *i = start;
    while (i != NULL)
    {
        printf("ID = %d , Name : %c \n", i->id, i->name);
        i = i->next;
    }
}
// Insertion : 1. at begin , 2. at end , 3. at any ;

// end
void insertionend()
{
    if (start == NULL)
    {
        start = createnew();
    }
    else
    {
        struct structure *i = start;
        while (i->next != NULL)
        {
            i = i->next;
        }
        i->next = createnew();
    }
}
// begin
void insbegin()
{
    struct structure *newnode = createnew();
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
// any
void insany()
{
    struct structure *newnode = createnew();
    struct structure *i = start;
    int search;
    printf("after which you want to insert : ");
    scanf("%d", &search);
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        while (i != NULL)
        {
            if (i->id == search)
            {
                newnode->next = i->next;
                i->next = newnode;
            }
            i = i->next;
        }
    }
}

int main()
{
    insbegin();
    insbegin();
    insbegin();
    insbegin();

    traversing();
}