#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0, i;

    for (i = 0; i <= 7; i++)
    {
        i += 5;
        a += i; // 5 -> 12 -> 21 -> 32 
        i -= 4;
    }
    
    printf("%d", a);

    return 0;
}
