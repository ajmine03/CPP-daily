#include <stdio.h>
#include <stdlib.h> //  absulate value niyar jnne
#include<math.h>
int main()
{
    int H, M;
    scanf("%d %d", &H, &M); // hour and min defined
    float h = 30 * H+ .5 * M;       // per hour e koto angle
    float m = 6 * M;        // per minute a koto angle
    float diff = fabs(h-m);
    printf("%f",360-diff);
   

    return 0;
}