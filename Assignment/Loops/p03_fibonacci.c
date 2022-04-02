/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, N, c, sum = 0, a = 0, b = 1;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", a);

        c = a + b;
        sum += a;
        
        a = b;
        b = c;
    }

    printf("\nSum is %d\n", sum);

    return 0;
}
