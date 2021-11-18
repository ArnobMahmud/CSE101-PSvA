/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cel, fahr;

    printf("Enter the temperature in Fahrenheit :\n");
    scanf("%f", &fahr);

    cel = (fahr - 32) * 5 / 9;
    printf("Enter the temperature in Celsius is %.2f:\n", cel);

    return 0;
}
