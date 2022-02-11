/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i = 0; i <= 100; i += 2)
    {
        sum += i;
    }

    printf("Sum is %d.", sum);

    return 0;
}
