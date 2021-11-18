/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num;

    printf("Enter a number : \n");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("%f is a positive number.\n", num);
    }
    else if (num < 0)
    {
        printf("%f is a negative number.\n", num);
    }
    else
    {
        printf("You have entered zero.\n", num);
    }

    return 0;
}
