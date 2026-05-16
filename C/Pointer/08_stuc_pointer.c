//  Define a structure Student with:
// char name[30]
// int marks

// Write a function updateMarks(struct Student *s, int bonus) that adds a bonus mark to the student’s existing marks using pointer to structure.
// Input multiple students
// Update their marks
// Print the updated result
#include <stdio.h>
struct Student
{
    char name[30];
    int marks;
};

int UpdateMarks(struct Student *s, int bonus)
{
    s->marks += bonus;
}

int main()
{
    printf("INPUT STUDENTS NUMBER:");
    int n, bonus;
    scanf("%d", &n);
    struct Student student[n];

    for (int i = 0; i < n; i++)
    {
        printf("input student %d name", i + 1);
        scanf("%s", &student[i].name);
        printf("input student %d mark", i + 1);
        scanf("%d", &student[i].marks);
    }
    printf("input bonus");
    scanf("%d", &bonus);

    for (int i = 0; i < n; i++)
    {
        UpdateMarks(&student[i], bonus);
    }

    printf("Update details :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Marks: %d\n",
               student[i].name,
               student[i].marks);
    }
}