/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fctr = 0;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            fctr += i;
        }
    }

    if (fctr == n)
    {
        printf("%d is perfect number.", n);
    }
    else
    {
        printf("%d is not perfect number.", n);
    }

    return 0;
}
