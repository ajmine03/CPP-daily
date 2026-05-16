#include<stdio.h>

struct Student {
    int id;
    char name[100];
    double cg;
};

int main(){
    struct Student s = { 1,"sadik",3.33};
    struct Student *ptr = &s;
    printf("%d\n",(*ptr).id);
    printf("%s\n",(*ptr).name);
    printf("%.2lf\n",(*ptr).cg);

    printf("%d\n",ptr->id);
    printf("%s\n", ptr->name);
    printf("%.2lf\n", ptr->cg);
}