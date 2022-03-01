/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, nxt, sum = 0, fst = 0, scd = 1;

    printf("Enter N : ");
    scanf("%d", &N);

    printf("%d %d ", fst, scd);
    sum = (fst + scd);

    for (int i = 0; i < N - 2; i++)
    {
        nxt = fst + scd;
        printf("%d ", nxt);
        fst = scd;
        scd = nxt;
        sum += nxt;
    }

    printf("\nSum is %d\n", sum);

    return 0;
}
