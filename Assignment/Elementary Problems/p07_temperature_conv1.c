/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cel, fahr;

    printf("Enter the temperature in Celsius :\n");
    scanf("%f", &cel);

    fahr = (cel * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is %.2f.\n", fahr);

    return 0;
}
