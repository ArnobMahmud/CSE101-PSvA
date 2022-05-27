/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

float arrayAvg(float A[], int size)
{
    float sum = 0, avg;

    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }

    return sum / size;
}

void main(int argc, char const *argv[])
{

    int size;

    printf("Enter array size : ");
    scanf("%d", &size);

    float A[size];

    for (int i = 0; i < size; i++)
    {
        printf("A[%d] : ", i);
        scanf("%f", &A[i]);
    }

    printf("Average is %.2f.\n", arrayAvg(A, size));
}
