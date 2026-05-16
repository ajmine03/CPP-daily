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
    struct insertion *A, *B, *C, *Start;
    A = (struct insertion *)malloc(sizeof(struct insertion));
    B = (struct insertion *)malloc(sizeof(struct insertion));
    C = (struct insertion *)malloc(sizeof(struct insertion));

    A->id = 10;
    B->id = 20;
    C->id = 30;

    A->cgpa = 3.9;
    B->cgpa = 3.8;
    C->cgpa = 3.7;

    A->next = B;
    B->next = C;
    C->next = NULL;

    Start = A;

    struct insertion *insertAny , * j;
    insertAny = (struct insertion *)malloc(sizeof(struct insertion));

    int i = 0;
    printf("which index you want to insert : 4");
    scanf("%d",&i);

    printf("Input id : ");
    scanf("%d", &insertAny->id);

    printf("Input cgpa : ");
    scanf("%f", &insertAny->cgpa);
    
    while(j!=NULL){

        
        j=j->next;

    }
    
}