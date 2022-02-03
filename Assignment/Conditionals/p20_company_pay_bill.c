/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define HOUSE_RENT 0.25

int main(int argc, char const *argv[])
{
    int level, basic_pay, gross_salary;
    float net_salary;

    printf("Enter your level :\n");
    scanf("%d", &level);

    printf("Enter your basic pay :\n");
    scanf("%d", &basic_pay);

    if (level <= 0 || level >= 5)
    {
        printf("You've entered invalid level.\n");
    }
    else
    {
        switch (level)
        {
        case 1:
            gross_salary = 1500 + basic_pay + HOUSE_RENT * basic_pay;
            break;
        case 2:
            gross_salary = 950 + basic_pay + HOUSE_RENT * basic_pay;
            break;
        case 3:
            gross_salary = 600 + basic_pay + HOUSE_RENT * basic_pay;
            break;
        case 4:
            gross_salary = 250 + basic_pay + HOUSE_RENT * basic_pay;
            break;
        }
    }

    if (gross_salary <= 2000)
    {
        net_salary = gross_salary;
        printf("Net salary is %.2f.\n", net_salary);
    }
    else if (gross_salary <= 4000)
    {
        net_salary = gross_salary - gross_salary * 0.03;
        printf("Net salary is %.2f.\n", net_salary);
    }
    else if (gross_salary <= 5000)
    {
        net_salary = gross_salary - gross_salary * 0.05;
        printf("Net salary is %.2f.\n", net_salary);
    }
    else
    {
        net_salary = gross_salary - gross_salary * 0.08;
        printf("Net salary is %.2f.\n", net_salary);
    }

    return 0;
}
