#include "main.h"

/**
 * getInt - gets integer value
 * @num: The character to print
 * Return: On success 1.
 */

void getInt(int num)
{
	int n;

	if (num == 0)
		return;

	n = num / 10;

	getInt(n);
	puchar(num % 10 + '0');

	return;
}
