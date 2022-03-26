/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100], max, min, c1 = 0, c2 = 0, n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    max = min = A[0];

    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            c1 = i;
        }
        if (min > A[i])
        {
            min = A[i];
            c2 = i;
        }
    }

    printf("Max is %d in %d index.\n", max, c1);
    printf("Min is %d in %d index.\n", min, c2);

    return 0;
}
