/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("How many number you want to print?:\n");
    scanf("%d", &num);

    printf("Number \t Square-root \t Square\n");
    printf("---------------------------------\n");
    for (int i = 1; i <= num; i++)
    {
        printf("%d\t %.2f\t\t %d\n", i, (float)sqrt(i), i*i);
    }

    return 0;
}
