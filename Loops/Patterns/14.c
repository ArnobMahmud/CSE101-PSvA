/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

/*
    11111
    2222
    333
    44
    5
*/