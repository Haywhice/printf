#include "main.h"

int put_s(char *string)
{
	int i = 0, r_val = 0;

	if (string)
	{
		while (string[i] != '\0')
		{
			puchar(string[i]);
			r_val += 1;
			i++;
		}
	}
	return (r_val);
}
