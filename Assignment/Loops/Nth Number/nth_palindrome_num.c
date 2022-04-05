/*
    Qn :            1 2 3 4 5 6 7 8 9 11 22 33 44 ............ Nth
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, N, count = 0, rev, rem, temp;

    printf("Enter Nth no : ");
    scanf("%d", &N);

    for (i = 1; count != N; i++)
    {
        temp = i;
        rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if (rev == i)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n%dth palindrome number is : %d", N, i - 1);

    return 0;
}
