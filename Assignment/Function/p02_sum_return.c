/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main(int argc, char const *argv[])
{
    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    printf("Sum is %d.\n", sum(n1, n2));

    return 0;
}
