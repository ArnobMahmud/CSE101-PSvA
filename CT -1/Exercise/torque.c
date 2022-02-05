/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define GRAVITY 9.8

int main(int argc, char const *argv[])
{
    float m1, m2, t;

    printf("Enter value of m1:\n");
    scanf("%f", &m1);

    printf("Enter value of m2:\n");
    scanf("%f", &m2);

    t = ((2 * m1 * m2) / (m1 + m2)) * GRAVITY;

    printf("Torque is %.2f.\n", t);

    return 0;
}
