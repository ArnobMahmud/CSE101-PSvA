/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int units;
    float amount;

    printf("Enter consumed units :\n");
    scanf("%d", &units);

   if (units <= 0)
   {
       printf("Invalid units.\n");
   }else{
       if (units <= 200)
       {
           amount = units * 0.50;
           printf("Amount to be paid is %.2f.\n", amount);
       }
       else if (units <= 400)
       {
           amount = 100 + (units - 200) * 0.50;
           printf("Amount to be paid is %.2f.\n", amount);
       }
       else if (units <= 600)
       {
           amount = 230 + (units - 400) * 0.80;
           printf("Amount to be paid is %.2f.\n", amount);
       }
       else
       {
           amount = 390 + (units - 600) * 1.0;
           printf("Amount to be paid is %.2f.\n", amount);
       }
   }
   

    return 0;
}
