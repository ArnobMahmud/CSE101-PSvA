/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number : \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an Even number.\n", num);
    }
    else
    {

        printf("%d is an Odd number.\n", num);
    }

    return 0;
}
