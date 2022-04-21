/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], num, min_idx, n, temp;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min_idx])
            {
                min_idx = j;
            }
        }
        temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
    }

    printf("Sorted array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", A[i]);
    }

    return 0;
}