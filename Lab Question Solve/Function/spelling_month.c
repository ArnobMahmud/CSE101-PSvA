/*  Qn :
    Write a c program using function to input a month
    number and print the spelling of this month. Here, you
    need to pass the month number and receive the spelling as a string.

                Sample Input     Sample Output
                    12              December
                    09              September
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void monthSpell(int m)
{
    switch (m)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Invalid input");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int m;
    scanf("%d", &m);

    monthSpell(m);
    return 0;
}
