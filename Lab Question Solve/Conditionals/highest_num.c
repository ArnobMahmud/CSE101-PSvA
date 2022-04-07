/*  Qn :
    Take 3 inputs of integers and print them from highest to
    lowest order.

    Sample input: 23 10 14
    Sample output: 10 14 23
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, max, mid, min;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        max = a;
    }
    else if (a > b && b > c)
    {
        mid = b;
    }
    else
    {
        min = c;
    }

    printf("%d %d %d", max, mid, min);

    return 0;
}
