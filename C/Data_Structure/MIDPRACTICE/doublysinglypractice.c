#include <stdio.h>
#include <stdlib.h>
struct practice
{
    int id;
    char name;
    struct practice *pore;
    struct practice *age;
};
struct practice *suru = NULL;
struct practice *createkoro()
{
    int x;
    char y;
    printf("ID abong Name daw : ");
    scanf("%d %c", &x, &y);
    struct practice *notun;
    notun = (struct practice *)malloc(sizeof(struct practice));
    notun->id = x;
    notun->name = y;
    notun->age = NULL;
    notun->pore = NULL;
    return notun;
}

void sesthekesuru()
{
    struct practice *notun = createkoro();
    struct practice *i = suru;
    while (i->pore != NULL)
    {
        i = i->pore;
    }
    while (i != NULL)
    {
        printf("ID = %d , Name = %c\n", i->id, i->name);
        i = i->age;
    }
}

void suruthekeses()
{
    struct practice *notun = createkoro();
    struct practice *i = suru;
    while (i->pore != NULL)
    {
        printf("ID = %d , Name = %c\n", i->id, i->name);
        i = i->pore;
    }
}

void insbeg()
{
    struct practice *notun = createkoro();
    if (suru == NULL)
    {
        suru = notun;
    }
    else
    {
        notun->pore = suru;
        suru->age = notun;
        suru = notun;
    }
}
void delbeg()
{
    struct practice *notun = createkoro();
    if (suru == NULL)
    {
        printf("Underflow\n");
    }
    else if (suru->pore == NULL)
    {
        suru = NULL;
    }
    else{
        struct practice *temp = suru;
        suru = suru -> pore;
        suru->age = NULL;
        free(temp);
    }

}
