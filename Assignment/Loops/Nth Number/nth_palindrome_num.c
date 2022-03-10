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
    int N, count = 0, rev, rem, temp;

    printf("Enter Nth no : ");
    scanf("%d", &N);

    for (int i = 1; i > 0; i++)
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
            count++;
            printf("%d ", i);
        }
        if (count == N)
        {
            printf("\n%dth palindrome number is : %d", N, i);
            break;
        }
    }

    return 0;
}
