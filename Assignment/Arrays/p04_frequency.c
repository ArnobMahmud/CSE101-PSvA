/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], FreqA[10], i, j, count, n;

    printf("Enter Number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements of an Array : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        FreqA[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count++;
                FreqA[j] = 0;
            }
        }
        if (FreqA[i] != 0)
        {
            FreqA[i] = count;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (FreqA[i] != 0)
        {
            printf("%d Occurs %d times\n", A[i], FreqA[i]);
        }
    }

    return 0;
}