/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int factNum(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factNum(num - 1);
}

void main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Factorial is : %d", factNum(num));
}
