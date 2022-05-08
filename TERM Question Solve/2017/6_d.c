/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[] = "BUTex";
    char t[10];

    int i = 0, j;
    for (j = strlen(str) - 1; j >= 0; j--)
    {
        t[i] = str[j]; // 4 3 2 1 0 -> xeTUB
        i++;
    }

    for (j = 0; j < i; j++)
    {
        printf("%c", t[j]); // xeTUB
    }

    return 0;
}

/*  Output :  xeTUB

    ----------------
    | i | j | t[i] |
    ---------------|
    | 0 | 4 |  x   |
    | 1 | 3 |  e   |
    | 2 | 2 |  T   |
    | 3 | 1 |  U   |
    | 4 | 0 |  B   |
    ----------------
    t[i] = xeTUB
*/