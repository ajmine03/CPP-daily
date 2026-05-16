#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float totalMarks;
};

int main()
{
    struct Student student1, student2;
    printf("Input student 1 details : \n");
    printf("Name: ");
    fgets(student1.name, 50, stdin);
    // scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);

    getchar();

    printf("Input student 2 details : \n");
    printf("Name: ");
    fgets(student2.name, 50, stdin);
    // scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);

    printf("The avarage of total mark is %.2f\n", (student1.totalMarks + student2.totalMarks) / 2.0);
}