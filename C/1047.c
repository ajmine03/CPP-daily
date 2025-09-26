#include <stdio.h>

int main()
{
    int Initial_hour, Initial_minute, Final_hour, Final_minute, total_hour, total_minute;
    scanf("%d %d %d %d", &Initial_hour, &Initial_minute, &Final_hour, &Final_minute);
    if (Initial_hour == Final_hour && Initial_minute == Final_minute)
    {
        total_hour = 24;
        total_minute = 0;
    }
    else
    {
        if (Initial_hour < Final_hour)
        {
            total_hour = Final_hour - Initial_hour;
        }
        else
        {
            total_hour = (24 - Initial_hour) + Final_hour;
        }
        if (Initial_minute <= Final_minute)
        {
            total_minute = Final_minute - Initial_minute;
        }
        else
        {
            total_minute = (60 - Initial_minute) + Final_minute;
            total_hour = total_hour - 1;
        }
    }

    // if (total_minute > 60)
    // {
    //     total_hour = total_hour + total_minute / 60;
    //     total_minute = total_minute % 60;
    // }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total_hour, total_minute);

    return 0;
}