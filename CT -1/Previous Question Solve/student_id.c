/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int std_id, dep, roll;

    printf("Enter your ID :\n");
    scanf("%d", &std_id); // ID ~ 202012047

    dep = (std_id / 1000) % 10; // => 202012 % 10 => 2
    roll = std_id % 1000;       // => 047

    printf("Roll is : %d.\n", roll);

    if (dep >= 1 && dep <= 5)
    {
        if (roll <= 27)
        {
            printf("Lab group : A.\n");
        }
        else if (roll <= 56)
        {
            printf("Lab group : B.\n");
        }
        else
        {
            printf("Lab group : C.\n");
        }
    }
    else
    {
        if (roll <= 20)
        {
            printf("Lab group : A.\n");
        }
        else
        {
            printf("Lab group : B.\n");
        }
    }

    return 0;
}
