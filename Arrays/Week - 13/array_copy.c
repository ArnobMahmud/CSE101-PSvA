/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100], Ac[100], n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  : ", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    printf("Printing from coppied array : ", n);
    for (int i = 0; i < n; i++)
    {
        Ac[i] = A[i];
        printf("%d ", Ac[i]);
    }

    return 0;
}
