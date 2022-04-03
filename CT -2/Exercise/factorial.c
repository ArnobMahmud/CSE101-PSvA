/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, fact = 1;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is : %d", num, fact);

    return 0;
}
