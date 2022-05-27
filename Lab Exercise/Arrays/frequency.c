/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int A[10], n, key, idx = -1, count = 0;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter number you want to search : ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            idx = i;
            count++;
        }
    }

    if (idx == -1)
    {
        printf("%d not found.", key);
    }
    else
    {
        printf("%d found at index %d", key, idx);
    }

    if (count > 0)
    {
        printf("\nFrequency : %d", count);
    }
}
