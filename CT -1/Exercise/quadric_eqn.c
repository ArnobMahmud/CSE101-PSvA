/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, disc, root1, root2;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    disc = sqrt(pow(b, 2) - 4 * a * c);

    root1 = (-b + disc) / (2 * a);
    root2 = (-b - disc) / (2 * a);

    printf("root1 = %.0f\n", root1);
    printf("root2 = %.0f\n", root2);

    return 0;
}
