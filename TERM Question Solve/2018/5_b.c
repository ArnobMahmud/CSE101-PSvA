/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[20] = "HELLO BUTEX";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c ", str[i]);
        }
    }

    return 0;
}

/*  Output :
    H L O B T X
*/