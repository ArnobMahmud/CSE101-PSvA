/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int purchase_amount;
    char item;
    float discount, amount_pay;

    printf("Enter item type mill cloth(m) or handloom(h) :\n");
    scanf("%c", &item);

    printf("Enter purchase amount :\n");
    scanf("%d", &purchase_amount);

    switch (item)
    {
    case 'm':
        if (purchase_amount >= 0)
        {
            if (purchase_amount <= 100)
            {
                discount = 0.0;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
            else if (purchase_amount <= 200)
            {
                discount = 0.050;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
            else if (purchase_amount <= 300)
            {
                discount = 0.075;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
            else
            {
                discount = 0.10;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
        }
        else
        {
            printf("Invalid input.\n");
        }
        break;

    case 'h':
        if (purchase_amount >= 0)
        {
            if (purchase_amount <= 100)
            {
                discount = 0.050;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
            else if (purchase_amount <= 200)
            {
                discount = 0.075;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
            else if (purchase_amount <= 300)
            {
                discount = 0.10;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
            else
            {
                discount = 0.15;
                amount_pay = purchase_amount - purchase_amount * discount;
            }
        }
        else
        {
            printf("Invalid input.\n");
        }
        break;
    }

    printf("Amount to be paid is %.2f.\n", amount_pay);

    return 0;
}
