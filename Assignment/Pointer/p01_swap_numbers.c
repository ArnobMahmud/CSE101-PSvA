/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void main(int argc, char const *argv[])
{
    int x, y, *p1, *p2, temp;

    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    p1 = &x;
    p2 = &y;

    printf("Before swap x : %d\n", *p1);
    printf("Before swap y : %d\n\n", *p2);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swap x : %d\n", *p1);
    printf("After swap y : %d\n", *p2);
}