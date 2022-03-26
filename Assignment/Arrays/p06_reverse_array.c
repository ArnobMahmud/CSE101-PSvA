/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], num, n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
