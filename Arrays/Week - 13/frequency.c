/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], FreqA[10], count = 0, n;

    printf("Enter Number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements of an Array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        if (A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1;
                }
            }
            FreqA[i] = count;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] != -1)
        {
            printf("%d occured => %d times.\n", A[i], FreqA[i]);
        }
    }

    return 0;
}