/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, temp;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("Before swap ->\na : %d, b : %d\n", a, b); // 40 50

    // temp = a;
    // a = b;
    // b = temp;

    a += b;    //  90
    b = a - b; //  40
    a -= b;    //  50

    printf("After swap ->\na : %d, b : %d\n", a, b);

    return 0;
}
