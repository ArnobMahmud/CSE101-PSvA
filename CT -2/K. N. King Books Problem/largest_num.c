/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    float num, max;

    printf("Enter range : ");
    scanf("%d", &n);

    printf("Enter %d numbers : ", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &num);
        max = num;

        if (num > max)
        {
            max = num;
        }
    }

    printf("Max number is %.2f", max);

    return 0;
}
