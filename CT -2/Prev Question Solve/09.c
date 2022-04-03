/*  Qn :
    Write a c program to take a decimal number as input and print the octal number as output.

                Sample Input        Sample Output
                    10                  12
                   123                 173
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, oct = 0, rem = 0, base = 1;

    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 8;
        oct += rem * base;
        base *= 10;
        num /= 8;
    }

    printf("%d", oct);

    return 0;
}
