#include <stdio.h>

void main()
{
    int arr[5] = {5, 10, 15, 20, 25};
 
    int arraySize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= arraySize; i++)
    {
        printf("%d \n", arr[i]);
    }
}

/*  Output :
    5
    10
    15
    20
    25
    0

    In the above example, we printed six elements
    while the array arr only had five.
    Because we tried to access the sixth element
    of the array, we got a semantic error and hence,
    the program generated a garbage value.
*/