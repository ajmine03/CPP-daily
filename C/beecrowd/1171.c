#include <stdio.h>

int main()
{
   int a = 10;
   int *p; // p হলো pointer
   p = &a; // p এর মধ্যে a-এর address রাখলাম

   printf("%d\n", *p); // *p = a-এর value
}
