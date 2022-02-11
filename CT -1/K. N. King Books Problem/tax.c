/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define TAX 0.05

int main(int argc, char const *argv[])
{
    float amount, add_tax;

    printf("Enter an amount :\n");
    scanf("%f", &amount);

    add_tax = amount + amount * TAX;

    printf("With tax added %.2f.\n", add_tax);

    return 0;
}
