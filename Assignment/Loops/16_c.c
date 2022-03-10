/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
