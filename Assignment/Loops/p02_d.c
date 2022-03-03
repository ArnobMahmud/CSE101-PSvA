/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num;
    float sum = 0.0;

    printf("Enter end num : \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += (1.0 / i);
    }

    printf("Sum is : %.2f", sum);

    return 0;
}
