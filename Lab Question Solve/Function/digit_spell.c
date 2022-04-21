/*  Qn :
    Write a c program using function to input a digit and
    print its spelling. Here, you need to pass the digit and
    receive the spelling as a string.

                Sample Input     Sample Output
                    0                 Zero
                    9                 Nine
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

void digitSpell(int n)
{
    switch (n)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    digitSpell(n);
    return 0;
}
