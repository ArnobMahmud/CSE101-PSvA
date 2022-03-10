/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, N, nxt, sum = 0, fst = 0, scd = 1;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", fst);

        nxt = fst + scd;
        sum += fst;
        
        fst = scd;
        scd = nxt;
    }
    printf("\n%d ", fst);

    printf("\nSum is %d\n", sum);

    return 0;
}
