/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define BASE_SALARY 1500.00
#define BOUNUS_RATE 200.00
#define COMMISSION 0.02

int main(int argc, char const *argv[])
{
    int quantity;
    float gross_salary, price;
    float bounus, commission;

    printf("Input number sold & price : \n");
    scanf("%d %f", &quantity, &price);

    bounus = BOUNUS_RATE * quantity;
    commission = COMMISSION * quantity * price;
    gross_salary = BASE_SALARY + commission + bounus;

    printf("Bounus is %6.2f.\n", bounus);
    printf("Commission is %6.2f.\n", commission);
    printf("Gross salary is %6.2f.\n", gross_salary);

    return 0;
}
