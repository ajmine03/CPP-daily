#include <stdio.h>
#include <stdlib.h>
struct insertion
{
    int id;
    float cgpa;
    struct insertion *next;
};

int main()
{
    struct insertion *A, *B, *C, *start;
    struct insertion *newnode;
    A = (struct insertion *)malloc(sizeof(struct insertion));
    B = (struct insertion *)malloc(sizeof(struct insertion));
    C = (struct insertion *)malloc(sizeof(struct insertion));
    newnode = (struct insertion *)malloc(sizeof(struct insertion));

    A->id = 10;
    B->id = 20;
    C->id = 30;

    A->cgpa = 3.9;
    B->cgpa = 3.8;
    C->cgpa = 3.7;

    A->next = B;
    B->next = C;
    C->next = NULL;

    printf("Input id you want to insert at the begining : ");
    scanf("%d", &newnode->id);
    printf("Input cgpa of %d : ", newnode->id);
    scanf("%f", &newnode->cgpa);

    start = A;
    newnode->next = start;
    struct insertion *i = newnode;

    printf("\n============== After insertion ====================\n\n");

    while (i != NULL)
    {
        printf("ID = %d , CGPA = %.1f \n", i->id, i->cgpa);
        i = i->next;
    }
}