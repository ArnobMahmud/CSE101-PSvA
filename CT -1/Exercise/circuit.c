/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>
#define INDUCTANCE 5.10
#define RESISTANCE 20.00

int main(int argc, char const *argv[])
{
    float capacitance, freq;

    printf("Enter the value of capacitance:\n"); // Range 0.01 ~ 0.1
    scanf("%f", &capacitance);

    freq = sqrt((1 / (INDUCTANCE * capacitance)) - (pow(RESISTANCE, 2) / (4 * pow(capacitance, 2))));

    printf("Frequence is %.2f.\n", freq);

    return 0;
}
