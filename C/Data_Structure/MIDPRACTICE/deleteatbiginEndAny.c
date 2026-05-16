#include <stdio.h>
#include <stdlib.h>
struct node
{
    int id;
    float cgpa;
    struct node *next;
};

int main()
{
    struct node *A, *B, *C;

    A = (struct node *)malloc(sizeof(struct node));
    B = (struct node *)malloc(sizeof(struct node));
    C = (struct node *)malloc(sizeof(struct node));

    A->id = 10;
    B->id = 10;
    C->id = 10;

    A->cgpa = 3.9;
    B->cgpa = 4.0;
    C->cgpa = 3.8;

    A->next = B;
    B->next = C;
    C->next = NULL;

    printf("where you want to delete At begin/At end (B/E)");
    char X;
    scanf(" %d",)
}
