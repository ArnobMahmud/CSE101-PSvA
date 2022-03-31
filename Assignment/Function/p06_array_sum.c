/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void arraySum()
{
    int A[100], n, sum = 0;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    printf("Sum is %d", sum);
}

int main(int argc, char const *argv[])
{
    arraySum();

    return 0;
}
