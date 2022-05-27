/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n, sum = 1;

    printf("Enter n : ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i ++)
    {
        sum += 1.0 / i;
    }

    printf("Sum is %f", sum);

    return 0;
}
