/*
    Qn :            0 1 1 2 3 5 8 13 21 .......... Nth

                Sample Input           Sample Output
                     10                     34
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a = 0, b = 1, c = 0;

    printf("Enter the nth value: ");
    scanf("%d", &n); // 6

    if (n == 1)
    {
        printf("%dst value of fibonacci series is %d.\n", n, a);
    }
    else if (n == 2)
    {
        printf("%dnd value of fibonacci series is %d.\n", n, b);
    }
    else
    {
        c = a + b; // 0 + 1 -> 1
        for (int i = 3; i <= n; i++)
        {
            a = b;     // 1 -> 1 -> 2 -> 3
            b = c;     // 1 -> 2 -> 3 -> 5
            c = a + b; // 2 -> 3 -> 5 -> 8
        }
        printf("%dth value of fibonacci series is %d.\n", n, b); // 5
    }

    return 0;
}
