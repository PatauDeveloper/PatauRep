int hoursconvert(int hours)
{

    {
        if (hours == 0)  printf("Íóëü ãîäèí");
        if (hours == 1)  printf("Îäíà ãîäèíà");
        if (hours == 2)  printf("Äâi ãîäèíè");
        if (hours == 3)  printf("Òğè ãîäèíè");
        if (hours == 4)  printf("×îòèğè ãîäèíè");
        if (hours == 5)  printf("Ï'ÿòü ãîäèí");
        if (hours == 6)  printf("Øiñòü ãîäèí");
        if (hours == 7)  printf("Ñiì ãîäèí");
        if (hours == 8)  printf("Âiñiì ãîäèí");
        if (hours == 9)  printf("Äåâ'ÿòü ãîäèí");
        if (hours == 10)  printf("Äåñÿòü ãîäèí");
        if (hours == 11)  printf("Îäèíàäöÿòü ãîäèí");
        if (hours == 12)  printf("Äâàíàäöÿòü ãîäèí");
        if (hours == 13)  printf("Òğèíàäöÿòü ãîäèí");
        if (hours == 14)  printf("×îòèğíàäöÿòü ãîäèí");
        if (hours == 15)  printf("Ï'ÿòíàäöÿòü ãîäèí");
        if (hours == 16)  printf("Øiñòíàäöÿòü ãîäèí");
        if (hours == 17)  printf("Ñiìíàäöÿòü ãîäèí");
        if (hours == 18)  printf("Âiñiìíàäöÿòü ãîäèí");
        if (hours == 19)  printf("Äåâ'ÿòüíàäöÿòü ãîäèí");
        if (hours == 20)  printf("Äâàäöÿòü ãîäèí");
        if (hours == 21)  printf("Äâàäöÿòü îäíà ãîäèíà");
        if (hours == 22)  printf("Äâàäöÿòü äğóãà ãîäèíà");
        if (hours == 23)  printf("Äâàäöÿòü òğåòÿ ãîäèíà");
        if (hours == 24)  printf("Äâàäöÿòü ÷åòâåğòà ãîäèíà");
    }
    return 3;
}

int minutesconvert(int minutes)
{
    int A3, A4;
    A3 = ((minutes - (minutes % 10)) - (minutes - (minutes % 100))) / 10;
    A4 = minutes % 10;

    if (minutes >= 0 || minutes <= 19)
    {
        if (minutes == 0)  printf(" íóëü õâèëèí");
        if (minutes == 1)  printf(" îäíà õâèëèíà");
        if (minutes == 2)  printf(" äâi õâèëèíè");
        if (minutes == 3)  printf(" òğè õâèëèíè");
        if (minutes == 4)  printf(" ÷îòèğè õâèëèíè");
        if (minutes == 5)  printf(" ï'ÿòü õâèëèí");
        if (minutes == 6)  printf(" øiñòü õâèëèí");
        if (minutes == 7)  printf(" ñiì õâèëèí");
        if (minutes == 8)  printf(" âiñiì õâèëèí");
        if (minutes == 9)  printf(" äåâ'ÿòü õâèëèí");
        if (minutes == 10)  printf(" äåñÿòü õâèëèí");
        if (minutes == 11)  printf(" îäèíàäöÿòü õâèëèíà");
        if (minutes == 12)  printf(" äâàíàäöÿòü õâèëèíè");
        if (minutes == 13)  printf(" òğèíàäöÿòü õâèëèíè");
        if (minutes == 14)  printf(" ÷îòèğíàäöÿòü õâèëèíè");
        if (minutes == 15)  printf(" ï'ÿòíàäöÿòü õâèëèí");
        if (minutes == 16)  printf(" øiñòíàäöÿòü õâèëèí");
        if (minutes == 17)  printf(" ñiìíàäöÿòü õâèëèí");
        if (minutes == 18)  printf(" âiñiìíàäöÿòü õâèëèí");
        if (minutes == 19)  printf(" äåâ'ÿòíàäöÿòü õâèëèí");
    }


    if (minutes >= 20 || minutes <= 60)
    {
        if (A3 == 2)  printf(" äâàäöÿòü");
        if (A3 == 3)  printf(" òğèäöÿòü");
        if (A3 == 4)  printf(" ñîğîê");
        if (A3 == 5)  printf(" ï'ÿòäåñÿò");
        if (A4 == 1)  printf(" îäíà õâèëèíà");
        if (A4 == 2)  printf(" äâi õâèëèíè");
        if (A4 == 3)  printf(" òğè õâèëèíè");
        if (A4 == 4)  printf(" ÷îòèğè õâèëèíè");
        if (A4 == 5)  printf(" ï'ÿòü õâèëèí");
        if (A4 == 6)  printf(" øiñòü õâèëèí");
        if (A4 == 7)  printf(" ñiì õâèëèí");
        if (A4 == 8)  printf(" âiñiì õâèëèí");
        if (A4 == 9)  printf(" äåâ'ÿòü õâèëèí");
    }
    else
    {
        printf("ERROR");
        _Exit(6);
    }
}


int inputhours()
{
    int h;
    printf("Ââåäiòü ÷àñ\n");
    printf("Ãîäèí:");
    scanf_s("%d", &h);
    int arrhours[1] = { h };
    int hournum = arrhours[0];
    if (hournum > 24 || hournum < 0 || hournum == NULL)
    {
        printf("ERROR");
        _Exit(1);
    }
    return (hournum);
}

int inputminutes()
{
    int m;
    printf("Õâèëèíí:");
    scanf_s("%d", &m);
    int arrhours[1] = { m };
    int minnum = arrhours[0];
    if (minnum > 60 || minnum < 0 || minnum == NULL)
    {
        printf("ERROR");
        _Exit(2);
    }
    return (minnum);
}