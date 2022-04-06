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
    int n, a = 0, b = 1, c = 0, temp;

    printf("Enter the nth value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        
        temp = a;
        a = b;
        b = c;
    }

    printf("\n%dth fibonacci number : %d", n, temp);

    return 0;
}
