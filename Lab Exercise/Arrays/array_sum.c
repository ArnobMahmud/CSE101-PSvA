/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float A[100], n, sum = 0, avg;

    printf("Enter array size : ");
    scanf("%f", &n);

    printf("Enter %.0f elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] : ", i);
        scanf("%f", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }

    avg = sum / n;
    printf("Sum :  %.2f, Average : %.2f", sum, avg);

    return 0;
}
