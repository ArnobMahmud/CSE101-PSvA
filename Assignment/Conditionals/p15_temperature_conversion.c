/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float temp, f, c;
    char ch;

    printf("Enter the temperature with unit : \n");
    scanf("%f %ch", &temp, &ch);

    switch (ch)
    {
    case 'C':

        f = 32 + (9 * temp) / 5;
        printf("Temperature in farenheit is : %.2f F.\n", f);
        break;

    case 'F':
        c = (temp - 32) * 5 / 9;
        printf("Temperature in celcius is : %.2f C.\n", c);
        break;

    default:
        printf("Invalid input.\n");
    }

    return 0;
}
