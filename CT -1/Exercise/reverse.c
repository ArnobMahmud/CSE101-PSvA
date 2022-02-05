/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter an alphabet :\n");

    ch = getchar();
    if (islower(ch))
    {
        putchar(toupper(ch));
    }
    else
    {
        putchar(tolower(ch));
    }

    return 0;
}
