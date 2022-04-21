/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], l, r, mid, idx, n, x;

    printf("Enter array size : ");
    scanf("%d", &n);

    printf("Enter %d elements : (Sorting Way)\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    printf("Which number want to search? : ");
    scanf("%d", &x);

    l = 0;
    r = n - 1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (A[mid] == x)
        {
            idx = mid;
            printf("%d found at index %d.", x, idx);
            return 0;
        }
        else if (x > A[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    printf("%d not found.", x);

    return 0;
}
