/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[100], num, pos = -1, n;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements  : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Which number you want to search ? : ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (num == A[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        printf("%d is not found in the array.\n", num);
    }
    else
    {
        printf("%d is found at position %d.\n", num, pos);
    }

    return 0;
}
