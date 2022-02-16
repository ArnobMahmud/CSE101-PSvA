/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int choice;
    float C, F, K;

    printf("(1) Celcius - Farenheit \n");
    printf("(2) Farenheit - Celcius \n");
    printf("(3) Celcius - Kelvin \n");
    printf("(4) Kelvin - Celcius \n");
    printf("(5) Farenheit - Kelvin \n");
    printf("(6) Kelvin - Farenheit \n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter celcius temperature : ");
        scanf("%f", &C);
        F = (9 * C / 5) + 32;
        printf("Farenheit temperature is : %.2fF\n", F);
        break;
    case 2:
        printf("Enter farenheit temperature : ");
        scanf("%f", &F);
        C = ((F - 32) / 9) * 5;
        printf("Celcius temperature is : %.2fC\n", C);
        break;
    case 3:
        printf("Enter celcius temperature : ");
        scanf("%f", &C);
        K = C + 273;
        printf("Kelvin temperature is : %.2fK\n", K);
        break;
    case 4:
        printf("Enter kelvin temperature : ");
        scanf("%f", &K);
        C = K - 273;
        printf("Celcius temperature is : %.2fC\n", C);
        break;
    case 5:
        printf("Enter farenheit temperature : ");
        scanf("%f", &F);
        K = (((F - 32) / 9) * 5) + 273;
        printf("Kelvin temperature is : %.2fK\n", K);
        break;
    case 6:
        printf("Enter kelvin temperature : ");
        scanf("%f", &K);
        F = (((K - 273) / 5) * 9) + 32;
        printf("Farenheit temperature is : %.2fF\n", F);
        break;

    default:
        printf("Invalid choice :) \n");
        break;
    }
    return 0;
}
