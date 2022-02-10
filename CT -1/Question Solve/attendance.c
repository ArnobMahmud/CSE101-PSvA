/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float atd_cls, total_cls, atd;

    printf("Enter attended classes & total classes : \n");
    scanf("%f %f", &atd_cls, &total_cls);

    atd = (atd_cls / total_cls) * 100;

    if (atd >= 90)
    {
        printf("8");
    }
    else if (atd >= 85)
    {
        printf("7");
    }
    else if (atd >= 80)
    {
        printf("6");
    }
    else if (atd >= 75)
    {
        printf("5");
    }
    else if (atd >= 70)
    {
        printf("4");
    }
    else if (atd >= 65)
    {
        printf("3");
    }
    else if (atd >= 60)
    {
        printf("2");
    }
    else
    {
        printf("0");
    }

    return 0;
}
