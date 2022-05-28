#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5, *p;

    p = &x; // & is used to get the address of variable

    printf("Value of x : %d\n", x);
    printf("Address of x : %d\n", &x);

    printf("Address of p : %d\n", p);
    printf("Content of p : %d", *p); // * is used to get the value of variable
    printf("Address of p variable : %d\n", &p);

    return 0;
}
