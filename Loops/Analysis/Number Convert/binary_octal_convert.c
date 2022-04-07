/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bin, oct, rem, base = 1;

    scanf("%d", &bin);

    while (bin != 0)
    {
        rem = bin % 8;
        oct += rem * base;
        base *= 2;
        bin /= 8;
    }

    printf("%d", oct);

    return 0;
}
