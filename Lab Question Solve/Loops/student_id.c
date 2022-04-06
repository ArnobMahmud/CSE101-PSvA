/*  Qn :  Write a c program that takes student ID as input and then
          finds the sum and average of those digits which are
          greater than 1 and also divisible by 1 and itself.

          Sample input         Sample output
           202012047       Sum is 17, Average is : 3.40
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int id, rem, sum = 0;
    float count = 0.0, avg;

    scanf("%d", &id);

    while (id != 0)
    {
        rem = id % 10;
        if (rem > 1)
        {
            count++;
            sum += rem;
        }
        avg = sum / count;
        id /= 10;
    }

    printf("Sum is %d", sum);
    printf("\nAverage is %.2f", avg);

    return 0;
}
