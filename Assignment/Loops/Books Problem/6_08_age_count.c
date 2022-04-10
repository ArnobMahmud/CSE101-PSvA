/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, count = 0;

    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &age);

        if (age >= 50 && age <= 60)
        {
            count++;
            continue;
        }
    }

    printf("Total %d", count);

    return 0;
}
