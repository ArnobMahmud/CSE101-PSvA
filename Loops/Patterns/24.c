/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        printf("\n");
    }

    return 0;
}

/*
    ABCDE
    ABCD
    ABC
    AB
    A
*/