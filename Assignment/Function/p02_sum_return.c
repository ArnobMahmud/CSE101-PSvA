/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("Sum is %d.\n", sum(a, b));

    return 0;
}
