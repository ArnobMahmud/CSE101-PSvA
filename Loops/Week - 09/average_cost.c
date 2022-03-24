/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float price, avg, sum, count = 0, max, min, range;

    printf("Enter 10 prices : ");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%f", &price);
        count++;

        if (count == 1)
        {
            max = min = price;
        }
        else if (max < price)
        {
            max = price;
        }
        else if (min > price)
        {
            min = price;
        }

        sum += price;
        avg = sum / 10;
        range = max - min;
    }

    printf("Max price is %.2f\n", max);
    printf("Min price is %.2f\n", min);
    printf("Average price is %.2f\n", avg);
    printf("Range is %.2f\n", range);

    return 0;
}
