#include <stdio.h>
#include<string.h>

struct Book
{

    char title[100];
    int price;
};

int main()
{
    struct Book Book1, Book2;
    printf("Input book 1 name :");
    fgets(Book1.title, 50, stdin);
    printf("Input price of %s", Book1.title);
    scanf("%d", &Book1.price);

    getchar();

    printf("Input book 2 name :");
    fgets(Book2.title, 50, stdin);
    printf("Input price of %s", Book2.title);
    scanf("%d", &Book2.price);

    if (Book1.price < Book2.price)
    {
        printf("%s is lowest price", Book1.title);
        printf("the price is %d\n", Book1.price);
    }
    else if (Book2.price < Book1.price)
    {
        printf("%s is lowest price", Book2.title);
        printf("the price is %d\n", Book2.price);
    }
}