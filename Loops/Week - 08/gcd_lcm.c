/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, gcd, lcm;

    printf("Enter two nnumbers : ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    lcm = num1 * num2 / gcd;

    printf("GCD is %d\nLCM is %d\n", gcd, lcm);

    return 0;
}
