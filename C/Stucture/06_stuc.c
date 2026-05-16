#include <stdio.h>

struct Student
{
    char name[100];
    int age;
    int totalMark;
};
int main()
{

    struct Student student1, student2;
    scanf("%s", student1.name);
    scanf("%s", &student2.name);
    scanf("%d", &student1.age);
    scanf("%d", &student2.age);
    scanf("%d", &student1.totalMark);
    scanf("%d", &student2.totalMark);

    printf("%d", (student1.totalMark + student2.totalMark));
}