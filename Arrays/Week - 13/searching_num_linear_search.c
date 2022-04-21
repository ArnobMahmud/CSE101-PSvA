/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100], num, idx = -1, n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    printf("Which number you want to search ? : ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (num == A[i])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        printf("%d is not found in the array.\n", num);
    }
    else
    {
        printf("%d is found at position %d.\n", num, idx);
    }

    return 0;
}
