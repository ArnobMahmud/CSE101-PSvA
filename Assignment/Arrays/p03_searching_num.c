/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10], num, pos = -1;

    printf("Enter 5 numbers : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Which number you want to search ? : ");
    scanf("%d", &num);

    for (int i = 0; i < 5; i++)
    {
        if (num == arr[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        printf("%d is not found in the array.\n", num);
    }
    else
    {
        printf("%d is found at position %d.\n", num, pos);
    }

    return 0;
}
