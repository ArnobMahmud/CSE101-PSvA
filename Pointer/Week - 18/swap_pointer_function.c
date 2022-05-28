#include <stdio.h>

void swapping(int *p1, int *p2) // recieve address of x & y variables as value
{
    int temp;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swap x : %d\n", *p1);
    printf("After swap y : %d\n", *p2);
}

int main(int argc, char const *argv[])
{
    int x, y, *p1, *p2;

    printf("Enter two numbers : ");
    scanf("%d %d", &x, &y);

    p1 = &x;
    p2 = &y;

    printf("Before swap x : %d\n", *p1);
    printf("Before swap y : %d\n\n", *p2);

    swapping(&x, &y); // passing address of x & y variables

    return 0;
}