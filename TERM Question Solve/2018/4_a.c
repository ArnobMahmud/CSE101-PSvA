/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 9; i >= 0; i--)
    {
        if (i < 5)
        {
            break;
        }
        printf("%d ", i);
    }

    return 0;
}

/*  Output :
    9 8 7 6 5
*/