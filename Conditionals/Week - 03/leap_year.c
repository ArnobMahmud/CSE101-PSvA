/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter a year :\n");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d isn't a leap year.", year);
    }

    return 0;
}
