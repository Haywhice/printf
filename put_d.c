#include "main.h"
#include <stdio.h>

/**
 * put_d - Print an integer and return the number of digits printed
 * @n: Integer to be printed
 * Return: Number of digits printed
 */
int put_d(int n)
{
    int digit, count = 0;

    if (n == 0)
    {
        puchar('0');
        return 1;
    }

    if (n < 0)
    {
        puchar('-');
        n = -n;
        count++;
    }

    if (n >= 10)
        count += put_d(n / 10);

    digit = n % 10;
    puchar('0' + digit);
    count++;

    return count;
}
