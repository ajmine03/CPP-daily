#include <stdio.h>


struct Book
{
    char book_title[100];
    double book_price;
};

int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    struct Book book[size];
    int mark[size];

    for (int i = 0; i < size; i++)
    {
        // printf("Enter mark - %d: ", i + 1);
        printf("Enter the book title: ");
        scanf("%s", book[i].book_title);
        printf("input price :");
        scanf("%lf", &book[i].book_price);
    }
    for (int i = 0; i < size; i++)
    {
        // printf("Enter mark - %d: ", i + 1);
        printf("book title: %s",book[i].book_title);
        
        printf(" price : %lf\n",book[i].book_price);
        // scanf("%lf", &book[i].book_price);
    }
    // system(pause);
}