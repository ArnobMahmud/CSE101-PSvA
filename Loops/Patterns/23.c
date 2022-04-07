/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }

    return 0;
}

/*
    A
    BA
    CBA
    DCBA
    EDCBA
*/