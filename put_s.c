#include "main.h"

/**
 * put_s - prints the character c to stdout
 * @str: The character to print
 *
 * Return: on succes return r_val
 */
int put_s(const char *str)
{

int  i = 0, r_val = 0;

if (str)
{
while (str[i] != '\0')
{
puchar(str[i]);
r_val += 1;
i++;
}
}
return (r_val);
}
