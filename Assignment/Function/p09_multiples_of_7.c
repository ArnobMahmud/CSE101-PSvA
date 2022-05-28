/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int multiples(int a)
{
    int sum = 0;
    if (a < 100)
    {
        return sum += (a + multiples(a + 7));
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int a = 7;
    printf("Sum is : %d", multiples(a));

    return 0;
}
