/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int GSM[5], sum = 0, val;

    for (int i = 0; i < 5; i++)
    {
        printf("GSM[%d] : ", i);
        scanf("%d", &GSM[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += pow((GSM[i] - 100), 2);
    }

    val = sqrt(sum / 5);
    printf("%d\n",val);

    if (val < 1.5)
    {
        printf("The fabric is rejected");
    }
    else
    {
        printf("The fabric is accepted");
    }

    return 0;
}
