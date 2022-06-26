/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], RevA[10], num, n;

    printf("Enter array size : ");
    scanf("%d", &n); // 5

    printf("Enter %d elements  :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]); // 1 2 3 4 5
    }

    for (int i = 0; i < n; i++)
    {
        RevA[i] = A[(n - 1) - i];
        /*  A[(5 - 1) - 0] => A[4] = RevA[0] ->
            A[(5 - 1) - 1] => A[3] = RevA[1] ->
            A[(5 - 1) - 2] => A[2] = RevA[2] ->
            A[(5 - 1) - 3] => A[1] = RevA[3] ->
            A[(5 - 1) - 4] => A[0] = RevA[4]
        */
    }

    printf("Reversed Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", RevA[i]);
    }

    return 0;
}
