#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[5] = {
        1,
        2,
        3,
        4, 5, 7};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
