#include <stdio.h>
#include <stdlib.h>
#include "timefunction.h"
#include <errno.h>





int hours, minutes;

void check1()
{
    if (hours > 24 || hours < 0) exit(1);
}


void check2()
{
    if (minutes > 60 || minutes < 0) _Exit(11);
}


int main(int argc, const char* argv[])
{



    printf("Введiть час");
    printf("\nГодин:");
    scanf_s("%d", &hours);
    check1();
    printf("Хвилинн:");
    scanf_s("%d", &minutes);
    check2();

    hoursconvert(hours);

    minutesconvert(minutes);

    return(0);
}