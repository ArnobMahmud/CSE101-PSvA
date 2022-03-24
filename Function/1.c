#include <stdio.h>
int main()
{
    int n1, n2, n3, i, j, count;

    printf("Enter the value of n1: ");
    scanf("%d", &n1);

    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}