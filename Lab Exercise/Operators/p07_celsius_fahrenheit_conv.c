/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float c, f;

    printf("Enter temperature is celsius : ");
    scanf("%f", &c);

    f = (9 * c / 5) + 32;
    printf("Temperature in fahrenheit is %.3f", f);

    return 0;
}
