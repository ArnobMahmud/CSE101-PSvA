/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, gcd, lcm;
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (n1 * n2) / gcd;

    printf("GCD : %d\n", gcd);
    printf("LCM : %d", lcm);

    return 0;
}
