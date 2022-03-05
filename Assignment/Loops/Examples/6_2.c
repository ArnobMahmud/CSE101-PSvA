/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mult;
    printf("\n\t\t\t\tMULTIPLICATION TABLE\n");
    printf("\t\t\t\t--------------------\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            mult = i * j;
            printf("%d\t", mult);
        }
        printf("\n");
    }

    return 0;
}
