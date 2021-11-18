/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    float avg;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3.0;
    printf("Average is %.3f.\n", avg);

    return 0;
}
