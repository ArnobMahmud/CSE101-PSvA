#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main(int argc, char const *argv[])
{
    int n, a = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(a));
        a++;
    }

    return 0;
}
