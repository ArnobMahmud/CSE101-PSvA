/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dec, oct, val, rem, base = 1;

    scanf("%d", &dec);
    
    val = dec;
    while (dec != 0)
    {
        rem = dec % 8;
        oct += rem * base;
        base *= 10;
        dec /= 8;
    }

    printf("%d is in octal is %d", val, oct);

    return 0;
}
