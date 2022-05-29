// A program that calculates the square root of integers
#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 4; i >= -2; i--)
    {
        printf("%f", sqrt(i));
        printf("\n");
    }
    return 0;
}

/*  Ouput :
    2.000000
    1.732051
    1.414214
    1.000000
    0.000000
    -1.#IND00
    -1.#IND00 -> Ideterminate

    In the above example, we used a for loop to calculate
    the square root of six integers. But because we also
    tried to calculate the square root of two negative numbers,
    the program generated two errors (the IND written above stands for "Ideterminate").
    These errors are the run time errors. -nan is similar to IND.
*/