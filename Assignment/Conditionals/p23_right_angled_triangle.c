/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c, e, f, g;
    
    printf("Enter the values of three side of triangle :\n");
    scanf("%d %d %d", &a, &b, &c);

    e = pow(a, 2) + pow(b, 2);
    f = pow(b, 2) + pow(c, 2);
    g = pow(c, 2) + pow(a, 2);

    if (a + b > c && b + c > a && c + a > b)
    {
        if (pow(a, 2) == f || pow(b, 2) == g || pow(c, 2) == e)
        {
            printf("The triangle is in the right angled.\n");
        }
        else
        {
            printf("The triangle isn't in the right angled.\n");
        }
    }
    else
    {
        printf("The triangle is invalid.\n");
    }

    return 0;
}
