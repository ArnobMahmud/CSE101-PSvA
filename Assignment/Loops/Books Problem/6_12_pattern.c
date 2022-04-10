/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, col;

    for (int i = 1; i <= 15; i++)
    {
        for (int j = 1; j < 18; j++)
        {
            if (((i == 4 || i == 5 || i == 6) && (j > 4)))
            {
                printf("  ");
            }
            else if ((i == 10 || i == 11 || i == 12) && (j < 14))
            {
                printf("  ");
            }
            else if (i == 2 && (j > 2 && j < 16) || i == 3 && (j > 9 && j < 16))
            {
                printf("- ");
            }
            else if (i == 7 && (j > 5 && j < 14))
            {
                printf("- ");
            }
            else if ((i == 8 && (j >= 1 && j < 14)) || (i == 9 && (j >= 1 && j < 14)))
            {
                printf("- ");
            }
            else if (i == 13 && (j > 4 && j < 14))
            {
                printf("- ");
            }
            else if (i == 14 && (j > 3 && j < 14))
            {
                printf("- ");
            }
            else if (i == 15 && (j > 2 && j < 14))
            {
                printf("- ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
