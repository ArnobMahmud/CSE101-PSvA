/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bin, dec = 0, rem = 0, base = 1, temp;

    printf("Enter a binary number : ");
    scanf("%d", &bin);

    temp = bin;
    while (bin != 0)
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }

    printf("%d in decimal is %d.", temp, dec);
    return 0;
}
