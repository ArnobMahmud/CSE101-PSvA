/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 100;

    printf("%d\n", 10 + x++); // x = 110
    printf("%d\n", 10 + ++x); // x = 112

    return 0;
}
