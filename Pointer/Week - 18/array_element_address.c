#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[5], *p;

    printf("Enter 5 elements :\n");

    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        p = &A[i];
        printf("Value of A[%d] : %d\n", i, *p);
    }

    for (int i = 0; i < 5; i++)
    {
        p = &A[i];
        printf("Address of A[%d] : %d\n", i, p);
    }

    return 0;
}