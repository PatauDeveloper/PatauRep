﻿#include <stdio.h>
#include <clocale>
#include <stdlib.h>
#include "timefunction.h"

int hours, minutes;

int check1()
{
    if (hours > 24 || hours < 0 || hours == NULL) 
    {
       printf("ERROR");
       _Exit(0);
    }
}

int check2()
{
    if (minutes > 60 || minutes < 0 || minutes == NULL) {
        printf("ERROR");
        _Exit(0);
    }
}

int check3()
{
    int temp1 = sizeof(hours);
    printf("\n%d\n", temp1);

    if (temp1 > 4)
    {
        printf("яблоки в бульоне");
        _Exit(0);
    } 
}

int main()
{   
    setlocale(LC_ALL, "ukr");
    printf("Введiть час");
    printf("\nГодин:");
    scanf_s("%d", &hours);  
    check1();
    check3();
    printf("Хвилинн:");
    scanf_s("%d", &minutes);
    check2();
    hoursconvert(hours);
    minutesconvert(minutes);
    return(0);
}