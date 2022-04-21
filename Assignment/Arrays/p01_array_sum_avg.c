/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[10], n, sum = 0;
    float avg;

    printf("Declare array size : ");
    scanf("%d", &n);

    printf("Enter elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            sum += A[i];
            avg = sum / n;
        }
    }

    printf("Sum is %d.\n", sum);
    printf("Average is %.2f.", avg);

    return 0;
}
