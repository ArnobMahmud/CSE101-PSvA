/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, A[10], B[10];

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
        printf("%4d", B[i]);
    }

    return 0;
}
