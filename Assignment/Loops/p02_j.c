/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i = 60; i >= 1; i -= 3)
    {
        // printf("%d ", i);
        sum += i;
    }

    printf("Sum is : %d\n", sum);

    return 0;
}
