/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cgpa;
    scanf("%f", &cgpa);

    if (cgpa >= 3.75)
    {
        printf("40\n");
    }
    else if (cgpa >= 3.50)
    {
        printf("35\n");
    }
    else if (cgpa >= 3.25)
    {
        printf("30\n");
    }
    else if (cgpa >= 3.00)
    {
        printf("25\n");
    }
    else if (cgpa >= 2.75)
    {
        printf("20\n");
    }
    else if (cgpa >= 2.50)
    {
        printf("10\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
