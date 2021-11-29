/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#define SERVICE 250.00

int main(int argc, char const *argv[])
{
    int calls_num;
    float bills;

    printf("Enter numbers of call : \n");
    scanf("%d", &calls_num);

    if (calls_num > 100)
    {
        bills = SERVICE + (calls_num - 100) * 1.25;
        printf("Bill is %.2f.\n", bills);
    }
    else
    {
        printf("Bill is %.2f.\n", SERVICE);
    }

    return 0;
}
