/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int timeFormat(int hr, char format)
{
    if (format == 'A')
    {
        if (hr != 12 && hr >= 0)
        {
            return hr;
        }
        else
        {
            return hr - 12;
        }
    }

    else if (format == 'P')
    {
        if (hr != 12 && hr <= 12)
        {
            return hr + 12;
        }
        else
        {
            return hr;
        }
    }
    return hr;
}

int main(int argc, char const *argv[])
{
    int hr, min, time;
    char sym, format;

    scanf("%d %c %d %c", &hr, &sym, &min, &format);

    time = timeFormat(hr, format);

    if (hr > 24 || min > 60)
    {
        printf("Invalid input");
    }
    else
    {
        if (min == 0)
        {
            printf("%d:00", time);
        }
        else
        {
            printf("%d:%d", time, min);
        }
    }

    return 0;
}
