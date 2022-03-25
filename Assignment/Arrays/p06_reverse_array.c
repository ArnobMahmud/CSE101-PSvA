/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10], num;

    printf("Enter 5 numbers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
