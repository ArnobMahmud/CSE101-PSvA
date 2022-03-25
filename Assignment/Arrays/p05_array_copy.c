/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr1[10], arr2[10];

    printf("Enter 5 numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
        printf("%d ", arr2[i]);
    }

    return 0;
}
