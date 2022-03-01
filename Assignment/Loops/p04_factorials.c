/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, fact = 1;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is : %d\n", N, fact);

    return 0;
}
