/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (k++) % 2);
        }
        printf("\n");
    }

    return 0;
}

/*
    1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1
*/