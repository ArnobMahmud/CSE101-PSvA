/*  Qn :
    Write a c program to input a 13-digit National Identity Card (NID) number and
    output whether the card-holder has registered from an urban or rural area using the
    RMO code (3rd digit from the left) as per the following table:

    RMO Code        1            2              3                       4                       5                  9
    Area        Rural area   Paurashabha   Other urban area     Other adjacent area      Cantonment area     City corporation

                    Sample Input        Sample Output
                    4798526000181       City corporation
                    3313031849055          Rural area
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void main(int argc, char const *argv[])
{

    long long int nid;
    printf("enter NID number: ");
    scanf("%lld", &nid);

    long long int temp = nid / pow(10, 10);
    long long int ans = temp % 10;

    printf("%lld\n", ans);

    switch (ans)
    {
    case 1:
        printf("Rural area\n");
        break;

    case 2:
        printf("Paurashabha\n");
        break;

    case 3:
        printf("Other urban area\n");
        break;

    case 4:
        printf("Other adjacent area\n");
        break;

    case 5:
        printf("Cantonment area\n");
        break;

    case 9:
        printf("City corporation\n");
        break;
    default:
        printf("No area code in RMO\n");
        break;
    }
}