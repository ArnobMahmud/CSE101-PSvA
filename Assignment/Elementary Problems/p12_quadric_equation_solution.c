/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, r1, r2, discriminant;
    printf("Enter the value of a : \n");
    scanf("%f", &a);
    printf("Enter the value of b : \n");
    scanf("%f", &b);
    printf("Enter the value of c : \n");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        printf("The roots are Imaginary.\n");
    }
    else
    {
        r1 = (-b + sqrt(b * b - 4 * a * c)) / 2.0 * a;
        r2 = (-b - sqrt(b * b - 4 * a * c)) / 2.0 * a;

        printf("Root1 is %3.2f.\n", r1);
        printf("Root2 is %3.2f.\n", r2);
    }

    return 0;
}
