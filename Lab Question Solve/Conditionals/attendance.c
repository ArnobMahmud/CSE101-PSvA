/*  Qn :
    Write a C program to calculate the attendance mark of a specific student based
    on the following table.

            Attendance (%)          Marks (%)
            90 and above               10
            85 to 89                    9
            80 to 84                    8
            75 to 79                    7
            60 to 74                    6
            Less than 60                0

            Sample Input         Sample Output
                7 11                    6
                5 11                    0
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total_cls, atd_cls, net_atd, marks;
    scanf("%d %d", &atd_cls, &total_cls);

    net_atd = (atd_cls * 100 / total_cls);

    if (net_atd >= 90)
    {
        marks = 10;
    }
    else if (net_atd >= 85)
    {
        marks = 9;
    }
    else if (net_atd >= 80)
    {
        marks = 8;
    }
    else if (net_atd >= 75)
    {
        marks = 7;
    }
    else if (net_atd >= 60)
    {
        marks = 6;
    }
    else
    {
        marks = 0;
    }

    printf("%d", marks);

    return 0;
}
