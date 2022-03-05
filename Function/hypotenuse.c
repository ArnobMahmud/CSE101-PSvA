#include <stdio.h>
#include <math.h>

float hypotenuseVal(int a, int b)
{
    float c;
    c = sqrt(pow(a, 2) + pow(b, 2));

    return c;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.2f", hypotenuseVal(a, b));

    return 0;
}
