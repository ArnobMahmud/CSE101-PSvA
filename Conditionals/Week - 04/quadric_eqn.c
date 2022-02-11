/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, x, x1, x2, root;

    printf("Enter the values of a, b & c :\n");
    scanf("%f %f %f", &a, &b, &c);

    root = sqrt(pow(b, 2) - 4 * a * c);

    if (a == 0 && b == 0)
    {
        printf("No solution\n");
    }
    else if (a == 0)
    {
        x = -c / b;
        printf("Solution is x = %f\n", x);
    }
    else if (root < 0.0)
    {
        printf("Solution is imaginary\n");
    }
    else
    {
        x1 = (-b + (root)) / (2.0 * a);
        x2 = (-b - (root)) / (2.0 * a);

        printf("x1 is : %f\n", x1);
        printf("x2 is : %f\n", x2);
    }

    return 0;
}
