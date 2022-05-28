#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, *p1, *p2;

    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    p1 = &x;
    p2 = &y;

    printf("Sum is %d", *p1 + *p2);

    return 0;
}