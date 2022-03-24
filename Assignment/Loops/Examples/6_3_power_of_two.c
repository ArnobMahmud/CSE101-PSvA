/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    printf("2^n\t\tn\t\t\t1/2^n\n");
    printf("\t------------------------------------\n");

    for (int i = 0; i <= 20; i++)
    {

        printf("%.0lf\t\t%d\t\t%20.12lf\n", pow(2, i), i, 1.0 / pow(2, i));
    }

    return 0;
}
