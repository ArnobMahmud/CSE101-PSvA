/*   Qn :
    A shop will give a discount of 10% if the cost of purchased quantity is more
    than 1000. Ask user for quantity. Suppose one unit will cost 100. Judge and
    print the total cost for the user.

    Sample Input:   Enter the quantity: 27
                    Enter the quantity: 5
    Sample Output:  Your discount is= 270 and total cost= 2430
                    You will not get a discount
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define COST 100

int main(int argc, char const *argv[])
{
    int quantity, discount, total_cost, disc_cost;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    total_cost = quantity * COST;

    if (total_cost > 1000)
    {
        discount = .1 * total_cost;
        total_cost -= discount;

        printf("Your discount is : %d and total cost : %d", discount, total_cost);
    }
    else
    {
        printf("You will not get a discount");
    }

    return 0;
}
