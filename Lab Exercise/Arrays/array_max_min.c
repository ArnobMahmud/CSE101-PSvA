/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int A[10], n, sum = 0, avg, max, min, c1 = 0, c2 = 0;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
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
        else if (min > A[i])
        {
            min = A[i];
            c2 = i;
        }
    }

    printf("Max : %d & Index : %d\nMin : %d & Index : %d", max, c1, min, c2);
}
