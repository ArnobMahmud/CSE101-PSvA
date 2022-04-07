/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
    5
    54
    543
    5432
    54321
*/