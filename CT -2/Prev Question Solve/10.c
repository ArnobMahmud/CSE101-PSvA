/*  Qn :
    Write a C program to find the average of the first and last digit of a number.

                Sample Input         Sample Output
                    12356                3.5
                    34972                2.5
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0, rem;
    float avg;

    scanf("%d", &num);

    sum = num % 10;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
    }

    sum += rem;
    avg = sum / 2.0;

    printf("%.1f", avg);

    return 0;
}
