/*  Qn :
    Write a c program using function to input a student id
    and print the number of seats of his/her department as per
    the following table:

   --------------------------------------------
   | Code    11 12 13 14 15 | 16 17 18 19 110 |
   | Seats         80       |       40        |
   --------------------------------------------
        Sample Input        Sample Output
        202012001               80
        202018001               40
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void seatAmount(int id)
{
    int dept;

    dept = (id / 1000) % 100;

    switch (dept)
    {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        printf("80");
        break;
    default:
        printf("40");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int id;
    scanf("%d", &id);

    seatAmount(id);

    return 0;
}
