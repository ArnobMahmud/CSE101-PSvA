/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5], sum = 0;

    printf("Enter 5 numbers : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum is %d", sum);

    return 0;
}
