/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x, ans;

    printf("Enter the value os x :\n");
    scanf("%d", &x);

    ans = pow(x, 5) + 2 * pow(x, 4) - 5 * (x, 3) - pow(x, 2) + 7 * x - 6;

    printf("Ans is %d.\n", ans);

    return 0;
}
