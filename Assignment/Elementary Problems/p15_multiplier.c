/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;

    printf("Enter the value of m : \n");
    scanf("%d", &m);
    printf("Enter the value of n : \n");
    scanf("%d", &n);

    if (m % n == 0)
    {
        printf("%d is a multiple of %d.\n", m, n);
    }
    else
    {
        printf("%d is not a multiple of %d.\n", m, n);
    }

    return 0;
}
