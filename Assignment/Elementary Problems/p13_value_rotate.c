/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y, z, temp1;

    printf("Enter the value of x : \n");
    scanf("%d", &x);
    printf("Enter the value of y : \n");
    scanf("%d", &y);
    printf("Enter the value of z : \n");
    scanf("%d", &z);

    temp1 = x;

    x = y;
    y = z;
    z = temp1;

    printf("After rotating - the value of x is : %d\n", x);
    printf("After rotating - the value of y is : %d\n", y);
    printf("After rotating - the value of z is : %d\n", z);

    return 0;
}
