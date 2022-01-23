/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("Enter first number :\n");
    scanf("%d", &num1);

    printf("Enter second number :\n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is the largest number.\n", num1);
    }
    else
    {
        printf("%d is the largest number.\n", num2);
    }

    return 0;
}
