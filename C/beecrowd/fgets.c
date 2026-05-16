#include <stdio.h>

int main()
{
    char st[100];
    fgets(st); // just like scanf [but fgets is should to use. gets has some bufferoverflow problems]

    puts(st); // just like printf with a line
    printf("%s ", st);
    puts(st); // just like printf with a line

    return 0;
}

//not workinggggggggg]