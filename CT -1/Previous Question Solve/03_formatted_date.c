/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int date, y, m, d;

    printf("Enter date :\n");
    scanf("%d", &date);       //=> 20220210

    y = date / 10000;        //=> 2022
    m = (date / 100) % 100;  //=> 202202 % 100 => 02
    d = date % 100;          //=> 10

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
        printf("Invalid.\n");
        break;
    }

    printf(" %d, %d", d, y);

    return 0;
}
