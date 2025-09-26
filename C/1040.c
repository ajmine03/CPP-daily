#include <stdio.h>

int main() {
    float N1,N2,N3,N4,N5 ;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    float avg_1 = (N1*2 + N2*3 + N3*4 + N4*1)/4 ;
    printf("Media: %.1f",avg_1);
    if (avg_1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg_1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (5<=avg_1 && avg_1>=6.9)
    {
        printf("Aluno em exame.\n");
    }
    
    
    
    
    return 0;
}