/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x1, y1, x2, y2;
    float D;

    printf("Enter the value of x1 & y1 :\n");
    scanf("%d %d", &x1, &y1);

    printf("Enter the value of x2 & y2 :\n");
    scanf("%d %d", &x2, &y2);

    D = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distance between the points is %.2f.\n", D);
    
    return 0;
}
