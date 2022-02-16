/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    printf("Enter the value of x :\n");
    scanf("%d", &x);

    y = (x > 0) ? 1 : x == 0 ? 0 : -1;

    printf("y is %d.\n", y);
    
    return 0;
}
