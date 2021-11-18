/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float num;
    int ceilResult, roundResult, floorResult;

    printf("Enter a floating number :\n");
    scanf("%f", &num);

    ceilResult = ceil(num);
    roundResult = round(num);
    floorResult = floor(num);

    printf("Ceil of the number %f is %d\n", num, ceilResult);
    printf("Round of the number %f is %d\n", num, roundResult);
    printf("Floor of the number %f is %d\n", num, floorResult);

    return 0;
}
