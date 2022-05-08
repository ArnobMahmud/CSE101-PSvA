/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, max;
    scanf("%d %d", &a, &b);

    max = a;

    if (b > max)
    {
        max = b;
    }

    printf("Max : %d", max);

    return 0;
}
