#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct traversing
    {
        int id;
        float cgpa;
        struct traversing *next;
    };

    struct traversing *A, *B, *C, *start;

    A = (struct traversing *)malloc(sizeof(struct traversing));
    B = (struct traversing *)malloc(sizeof(struct traversing));
    C = (struct traversing *)malloc(sizeof(struct traversing));

    A->id = 10;
    B->id = 20;
    C->id = 30;

    A->cgpa = 3.9;
    B->cgpa = 3.8;
    C->cgpa = 3.7;

    A->next = B;
    B->next = C;
    C->next = NULL;

    start = A;
    struct traversing *i = start;
    while (i != NULL)
    {
        printf("ID = %d, CGPA = %.1f\n", i->id, i->cgpa);
        i = i->next;
    }
}