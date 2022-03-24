/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 5 || j == 5)
            {
                printf("S ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
