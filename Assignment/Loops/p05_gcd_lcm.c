/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, gcd, lcm;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    lcm = n1 * n2 / gcd;

    printf("GCD is : %d\n", gcd);
    printf("LCM is : %d\n", lcm);

    return 0;
}
