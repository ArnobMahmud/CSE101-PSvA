/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, N, sum = 0;

    printf("Enter N : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 3 != 0)
        {
            sum += i;
        }

        printf("i = %d & sum = %d\n", i, sum);
    }

    printf("\nSum is %d.", sum);

    return 0;
}
