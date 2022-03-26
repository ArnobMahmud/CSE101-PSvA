/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp[100][100], max, min;

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &temp[i][j]);
        }
    }

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%4d\t", temp[i][j]);
        }
        printf("\n");
    }

    max = min = temp[0][0];

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (max < temp[i][j])
            {
                max = temp[i][j];
            }
            if (min > temp[i][j])
            {
                min = temp[i][j];
            }
        }
    }

    printf("Max temperature is %d.\n", max);
    printf("Min temperature is %d.\n", min);

    return 0;
}
