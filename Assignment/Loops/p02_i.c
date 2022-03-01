/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, sum = 0;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 != 0)
        {
            sum += i;
        }
    }

    printf("Sum is : %d\n", sum);

    return 0;
}
