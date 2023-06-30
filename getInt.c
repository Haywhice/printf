#include "main.h"

/**
 * getInt - gets integer value
 *
*@num: The character to print
 * Return: On success 1.
 */

void getInt(int num, int *count)
{
	int n;

	if (num == 0)
		return;
	if (num < 0)
	{
		puchar('-');
		num = num * (-1);
	}

	n = num / 10;
	(*count)++;
	getInt(n, count);
	puchar(num % 10 + '0');
	

	return;
}
