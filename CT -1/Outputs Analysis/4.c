/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = -14, n = 3;

    printf("%d\n", m / n * 10); // -40

    n = -n;
    printf("%d\n", m / n * 10); // 40

    return 0;
}
