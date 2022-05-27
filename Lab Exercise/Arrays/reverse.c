/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], revA[10], n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]); // 1 2 3 4 5
                            // 0 1 2 3 4
    }

    printf("Reversed Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        revA[i] = A[(n - 1) - i];
        printf("%4d", revA[i]);
    }

    return 0;
}