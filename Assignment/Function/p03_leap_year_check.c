/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int leapYear(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if (leapYear(year) == 1)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}
