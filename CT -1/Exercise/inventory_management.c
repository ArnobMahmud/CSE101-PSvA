/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float setup_cost, demand_rate, holding_cost, EOQ, TBO;

    printf("Enter set up cost :\n");
    scanf("%f", &setup_cost);

    printf("Enter demand rate :\n");
    scanf("%f", &demand_rate);

    printf("Enter holding cost :\n");
    scanf("%f", &holding_cost);

    EOQ = sqrt((2 * demand_rate * setup_cost) / holding_cost);
    TBO = sqrt((2 * setup_cost / demand_rate * holding_cost));

    printf("EOQ is %.2f.\n", EOQ);
    printf("TBO is %.2f.\n", TBO);
    
    return 0;
}
