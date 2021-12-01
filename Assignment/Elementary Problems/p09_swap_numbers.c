/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, temp;

    printf("Enter value of a :\n");
    scanf("%d", &a);
    printf("Enter value of b :\n");
    scanf("%d", &b);

    temp = a;

    a = b;
    b = temp;

    printf("After swaping value of a is : %d.\n", a);
    printf("After swaping value of b is : %d.\n", b);

    return 0;
}
