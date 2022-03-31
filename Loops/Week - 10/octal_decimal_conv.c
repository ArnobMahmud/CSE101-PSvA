/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int oct, dec = 0, rem = 0, base = 1, temp;

    printf("Enter a octal number : ");
    scanf("%d", &oct);

    temp = oct;
    while (oct != 0)
    {
        rem = oct % 10;
        dec += rem * base;
        base *= 8;
        oct /= 10;
    }

    printf("%d in decimal is %d.", temp, dec);
    return 0;
}
