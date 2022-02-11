/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float num, result;
    int count = 0;

input:
    printf("Enter a number :\n");
    scanf("%f", &num);

    if (num < 0)
    {
        count++;
        printf("Number can't be negative.\n");
        if (count < 3)
        {
            goto input;
        }
        else
        {
            goto exit;
        }
    }
    else
    {
        result = sqrt(num);
    }

    printf("Result is %.2f.\n", result);
exit:
    return 0;
}
