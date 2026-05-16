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

    struct insertion *A, *B, *C, *start, *newnode;

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

    start = A;
    struct insertion *i = start;

    printf("Input id you want to insert at end : ");
    scanf("%d", &newnode->id);
    printf("Input cgpa you want to insert at end : ");
    scanf("%f", &newnode->cgpa);

    while (i->next != NULL)
    {
        i = i->next;
    }
    newnode->next = NULL;
    i->next = newnode;

    struct insertion *j = start;
    printf("\n\n==== After insertion ===== \n");

    while (j != NULL)
    {
        printf("ID = %d, CGPA = %.1f \n", j->id, j->cgpa);
        j = j->next;
    }
}