/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int purchase_amount;
    float amount_pay;

    printf("Enter purchase amount :\n");
    scanf("%d", &purchase_amount);

    if (purchase_amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else
    {
        if (purchase_amount <= 100)
        {
            amount_pay = purchase_amount - purchase_amount * 0.05;
            printf("Paid amount is %.2f.\n", amount_pay);
        }
        else if (purchase_amount <= 200)
        {
            amount_pay = purchase_amount - purchase_amount * 0.125;
            printf("Paid amount is %.2f.\n", amount_pay);
        }
        else if (purchase_amount <= 300)
        {
            amount_pay = purchase_amount - purchase_amount * 0.175;
            printf("Paid amount is %.2f.\n", amount_pay);
        }
        else
        {
            amount_pay = purchase_amount - purchase_amount * 0.25;
            printf("Paid amount is %.2f.\n", amount_pay);
        }
    }

    return 0;
}
