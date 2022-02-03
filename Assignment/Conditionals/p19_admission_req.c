/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int phy, chem, math, sum_3;

    printf("Enter phy, chem & math marks :\n");
    scanf("%d %d %d", &phy, &chem, &math);

    sum_3 = phy + chem + math;

    if (phy >= 50 && chem >= 40 && math >= 60 && (sum_3 >= 200 || (math + phy) >= 150))
    {
        printf("You are an eligible candidate.\n");
    }
    else
    {
        printf("You aren't an eligible candidate.\n");
    }

    return 0;
}
