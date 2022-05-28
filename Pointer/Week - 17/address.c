#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;

    printf("Value of x : %d\n", x);
    printf("Address of x : %d", &x);  // & is used to get the address of variable

    return 0;
}
