/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

    int main(int argc, char const *argv[])
{
    int A[5], min;

    printf("Enter five numbers : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    min = A[0];
    for (int i = 0; i < 5; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    printf("Min is : %d", min);

    return 0;
}
