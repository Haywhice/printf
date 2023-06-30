#include "main.h"

/**
 * put_cs - prints the character c to stdout
 * @string: The character to print
 *
 * Return: on succes return r_val
 */
int put_cs(char *string)
{

int  i = 0, r_val = 0;

if (string)
{
while (string[i] != '\0')
{
puchar(string[i]);
r_val += 1;
i++;
}
}
puchar('\n');
return (r_val);
}
