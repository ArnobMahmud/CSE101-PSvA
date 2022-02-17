/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int x = 20, y = 5;

    if (x == 10 + 15 && y < 10)
    {
        printf("I'm executed.\n");
    }
    else
    {
        printf("I'm wrong.\n");
    }

    return 0;
}

/*
precedence
----------
    ()
    *
    /
    %
    +
    -
    ==
    &&
    ||
*/