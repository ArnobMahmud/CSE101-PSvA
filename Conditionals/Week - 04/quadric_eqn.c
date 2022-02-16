/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, x, x1, x2, disc;

    printf("Enter the values of a, b & c :\n");
    scanf("%f %f %f", &a, &b, &c);

    disc = pow(b, 2) - 4 * a * c;
    printf("Disc is : %.2f.\n", disc);

    if (a == 0 && b == 0)
    {
        printf("No solution.\n");
    }
    else if (a == 0)
    {
        x = -c / b;
        printf("Solution is x = %.2f\n", x);
    }
    else if (disc < 0)
    {
        printf("Solutions are imaginary.\n");
    }
    else
    {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);

        printf("x1 is : %.2f\n", x1);
        printf("x2 is : %.2f\n", x2);
    }

    return 0;
}
