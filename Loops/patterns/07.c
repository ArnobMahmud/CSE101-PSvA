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
            printf("%c", 64 + i);
        }
        printf("\n");
    }

    return 0;
}

/*
    AAAAA
    BBBBB
    CCCCC
    DDDDD
    EEEEE
*/