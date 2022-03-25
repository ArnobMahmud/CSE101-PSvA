/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[100], max, min, c1 = 0, c2 = 0;

    printf("Enter 5 numbers : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            c1 = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            c2 = i;
        }
    }

    printf("Max is %d in %d index.\n", max, c1);
    printf("Min is %d in %d index.\n", min, c2);

    return 0;
}
