/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100], temp, n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
