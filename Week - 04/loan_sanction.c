/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int loan1, loan2, cur_loan, sanction;

    printf("Enter first loan :\n");
    scanf("%d", &loan1);

    printf("Enter second loan :\n");
    scanf("%d", &loan2);

    printf("Enter current loan :\n");
    scanf("%d", &cur_loan);

    if (loan1 > 0)
    {
        sanction = 0;
        printf("You are not eligible for the loan.Sanction is : %d.\n", sanction);
    }
    else if (loan2 + cur_loan > 50000)
    {
        sanction = 50000 - loan2;
        printf("Sanction is : %d.\n", sanction);
    }
    else
    {
        sanction = cur_loan;
        printf("Sanction is : %d.\n", sanction);
    }

    return 0;
}
