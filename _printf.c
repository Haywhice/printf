#include <stdio.h>
#include "main.h"
/**
 * _printf - print out values
 * @format: string that will be printed
 * Return: returns pointer to buffer
 */
int _printf(const char *format, ...)
{
	int i, n_val = 0;
	va_list args;
	if (format == NULL)
	return (n_val);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			puchar(format[i]);
		}
		else if (format[i + 1] == 'c')
			{
				puchar(va_arg(args, int));
				i++;
			}
		else if (format[i + 1] == 's')
			{
				n_val += put_s(va_arg(args, char *));
				i++;
				n_val += (n_val - 1);
			}
		else if (format[i + 1] == '%')
			{
				puchar('%');
				i++;
			}
		else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
			{
				getInt(va_arg(args, int));
				i++;
			}
				
		else
        		{
      			puchar(format[i]);
	         	 n_val += 2;
	}
	n_val += 1;
	}
	va_end(args);
	return (n_val);
}
