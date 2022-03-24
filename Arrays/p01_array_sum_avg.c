/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[50], size, sum = 0;
    float avg;

    printf("Declare array size : ");
    scanf("%d", &size);

    printf("Enter elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
            avg = sum / size;
        }
    }

    printf("Sum is %d.\n", sum);
    printf("Average is %.2f.", avg);

    return 0;
}
