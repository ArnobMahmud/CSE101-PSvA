/*  Qn :
    Write a C program to accept a coordinate point in a XY
    coordinate system and determine in which quadrant the
    coordinate point lies.

    Sample input : 7 9
    Sample output : The coordinate point (7,9) lies in the
    First quadrant.
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.", x, y);
    }
    else
    {
        printf("The coordinate point (%d,%d) lies in the Forth quadrant.", x, y);
    }

    return 0;
}
