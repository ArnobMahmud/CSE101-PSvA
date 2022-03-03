/*  Qn :
    Write a c program to take a lower limit and an upper limit as input and print all perfect
    numbers within this range. A perfect number is equal to the sum of its factors
    excluding itself. For example, 28 is a perfect number. The factors of 28 are 1, 2, 4, 7,
    14, and 28. The sum of its factors (excluding itself) is 1 + 2 + 4 + 7 + 14 = 28, which is
    equal to the original number. Hence, it is a perfect number.

                            Sample Input            Sample Output
                                 1 100                  6 28
                                100 1000                496

*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int ll, ul, fact;

    printf("Enter lower limit : ");
    scanf("%d", &ll);

    printf("Enter upper limit : ");
    scanf("%d", &ul);

    for (int i = ll; i <= ul; i++)
    {
        fact = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                fact += j;
            }
        }
        if (fact == i)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
