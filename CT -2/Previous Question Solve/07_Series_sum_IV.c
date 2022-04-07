/*
    Write a c program to take a number as input and print the sum of the following series
    upto that number:
                         1 + 2 + 4 + 7 + 11 + 16 + 22 + . . . . ≤ N

                        Sample Input        Sample Output
                           50                   175
                          100                   469

*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0, d = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += d)
    {
        printf("%d ", i);
        sum += i;
        d++;
    }
    printf("\nSum is %d", sum);

    return 0;
}
