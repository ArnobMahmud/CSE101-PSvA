/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

    int main(int argc, char const *argv[])
{

    long long int nid;
    printf("enter NID number: ");
    scanf("%lld", &nid);

    long long int temp = nid / pow(10,10);
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