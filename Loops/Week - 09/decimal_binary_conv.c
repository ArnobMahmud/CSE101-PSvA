/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dec, temp = 0, rem = 0, bin = 0, base = 1;

    printf("Enter a decimal number : ");
    scanf("%d", &dec);

    temp = dec;
    while (dec != 0)
    {
        rem = dec % 2;
        bin += rem * base;
        base *= 10;
        dec /= 2;
    }

    printf("%d in binary is %d.", temp, bin);

    return 0;
}

/*
    Input => 12

     rem               bin                   base               dec
  (dec % 2)      (bin + rem * base)      (base * 10)         (dec / 2)

   12 % 2 = 0     0 + 0 * 1 = 0           1 * 10 = 10         12 / 2 = 6
   6 % 2 = 0      0 + 0 * 10 = 0          10 * 10= 100        6 / 2 = 3
   3 % 2 = 1      0 + 1 * 100 = 100       100 * 10= 1000      3 / 2 = 1
   1 % 2 = 1      100 + 1 * 1000 = 1100   1000 * 10= 10000    1 / 2 = 0

   Bin => 1100
*/