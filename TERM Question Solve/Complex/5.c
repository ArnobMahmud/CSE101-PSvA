#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    float avg;

    printf("How many students age need to be averaged ? ");
    scanf("%d", &n);

    int ara[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of %dth student \n", i);
        scanf("%d", &ara[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ara[i];
    }

    printf("sum %d\n", sum);

    avg = (float)sum / n;
    printf("%f", avg);

    return 0;
}