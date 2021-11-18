/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    printf("Enter first number :\n");
    scanf("%d", &num1);

    printf("Enter second number :\n");
    scanf("%d", &num2);

    printf("Enter third number :\n");
    scanf("%d", &num3);

    if (num1 < num2 && num1 < num3)
    {
        printf("%d is the smallest number.\n", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("%d is the samllest number.\n", num2);
    }
    else
    {
        printf("%d is the smallest number.\n", num3);
    }

    return 0;
}
