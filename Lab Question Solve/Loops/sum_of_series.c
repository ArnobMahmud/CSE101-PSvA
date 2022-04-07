/*  Qn :
    Write a C program to display the sum of the series

        9 + 99 + 999 + 9999 + .....

             Sample Input    Sample Output
                  5             111105
*/

/*
  Author : Arnob Mahmud

  mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(10, i) - 1;
    }

    printf("%d", sum);

    return 0;
}
