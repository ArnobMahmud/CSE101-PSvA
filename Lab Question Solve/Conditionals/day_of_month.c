/*  Qn :
    Write a C program to find the number of days in a month using switch.

            Sample Input                        Sample Output
           Enter month: 1               Number of days in 1 month is: 31
           Enter month: 15              You have entered an invalid month
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Number of days in %d month is: 31", month);
        break;
    case 2:
        printf("Number of days in %d month is: 28", month);
        break;
    case 3:
        printf("Number of days in %d month is: 31", month);
        break;
    case 4:
        printf("Number of days in %d month is: 30", month);
        break;
    case 5:
        printf("Number of days in %d month is: 31", month);
        break;
    case 6:
        printf("Number of days in %d month is: 30", month);
        break;
    case 7:
        printf("Number of days in %d month is: 31", month);
        break;
    case 8:
        printf("Number of days in %d month is: 31", month);
        break;
    case 9:
        printf("Number of days in %d month is: 30", month);
        break;
    case 10:
        printf("Number of days in %d month is: 31", month);
        break;
    case 11:
        printf("Number of days in %d month is: 30", month);
        break;
    case 12:
        printf("Number of days in %d month is: 31", month);
        break;
    default:
        printf("You have entered an invalid month");
        break;
    }
    return 0;
}
