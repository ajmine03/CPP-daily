#include <stdio.h>
#include <stdlib.h>

struct searching
{
    int id;
    float cgpa;
    struct searching *next;
};

int main()
{

    struct searching *A, *B, *C, *start;
    A = (struct searching *)malloc(sizeof(struct searching));
    B = (struct searching *)malloc(sizeof(struct searching));
    C = (struct searching *)malloc(sizeof(struct searching));

    A->id = 10;
    B->id = 20;
    C->id = 30;

    A->cgpa = 3.9;
    B->cgpa = 3.8;
    C->cgpa = 3.7;

    A->next = B;
    B->next = C;
    C->next = NULL;

    int search, flag = 0;
    printf("input id you want to search : ");
    scanf("%d", &search);
    start = A;
    struct searching *i = start;

    while (i != NULL)
    {
        if (i->id == search)
        {
            flag++;
        }
        i = i->next;
    }

    if (flag > 0)
    {
        printf("FOUND\n");
    }
    else
    {
        printf("NOT FOUND\n");
    }
}