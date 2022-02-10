/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    float b = 10.10;
    double c = 2.56;
    char d = 'v';
    long e = 1234567891;
    long long f = 12345678910111213;

    printf("Size of a is %d.\n", sizeof(a));
    printf("Size of b is %d.\n", sizeof(b));
    printf("Size of c is %d.\n", sizeof(c));
    printf("Size of d is %d.\n", sizeof(d));
    printf("Size of e is %d.\n", sizeof(e));
    printf("Size of f is %d.\n", sizeof(f));

    return 0;
}
