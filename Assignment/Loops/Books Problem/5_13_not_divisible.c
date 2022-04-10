/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
