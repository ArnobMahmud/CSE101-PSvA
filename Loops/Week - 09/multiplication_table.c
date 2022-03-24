/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, col;

    printf("Enter row : ");
    scanf("%d", &row); // will control multiplication of target num

    printf("Enter column : ");
    scanf("%d", &col); // will control multiplication of range num

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
