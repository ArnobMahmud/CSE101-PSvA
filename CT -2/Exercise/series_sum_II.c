/* 1 + 1/3! + 1/5! + 1/7! + . . . + 1/N! */

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, fact;
    float sum = 0;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i += 2)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("1/%d! + ", i);
        sum += 1.0 / fact;
    }

    printf("\nSum is : %f", sum);

    return 0;
}
