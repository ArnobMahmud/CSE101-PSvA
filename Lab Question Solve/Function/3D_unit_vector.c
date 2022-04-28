/*  Qn :
    Write a c function to take two 3D points using arrays, i.e., P, Q, as input and print the
    unit vector from P to Q as output according to the following formula :

                           Q - P
                    â  = --------
                          |Q − P|

            Sample Input        Sample Output
              1  2  1
                                0  -0.71  0.71
              1  1  2
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

void unitVector(int P[], int Q[])
{
    int Q_P[3], x = 0;
    float mod_Q_P, a[3];

    for (int i = 0; i < 3; i++)
    {
        Q_P[i] = Q[i] - P[i];
        x += pow(Q_P[i], 2);
        mod_Q_P = sqrt(x);
    }

    for (int i = 0; i < 3; i++)
    {
        a[i] = Q_P[i] / mod_Q_P;
        printf("%.2f\t", a[i]);
    }
}

int main(int argc, char const *argv[])
{
    int P[3], Q[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &P[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &Q[i]);
    }

    unitVector(P, Q);

    return 0;
}
