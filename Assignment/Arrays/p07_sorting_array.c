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

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                num = arr[i];
                arr[i] = arr[j];
                arr[j] = num;
            }
        }
        printf("%d ", arr[i]);
    }
    return 0;
}
