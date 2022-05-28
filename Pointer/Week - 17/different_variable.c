#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5, y = 7, z = 10, *p;

    p = &x;                           // address store
    printf("Address of x : %d\n", p); // address print
    printf("Value of x : %d\n", *p);  // value print

    p = &y;                           // address store
    printf("Address of y : %d\n", p); // address print
    printf("Value of y : %d\n", *p);  // value print

    p = &z;                           // address store
    printf("Address of z : %d\n", p); // address print
    printf("Value of z : %d\n", *p);  // value print

    return 0;
}

/*
    & is used to get the address of variable
    * is used to get the value of variable
*/